class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        const int MAX_LOC = 1001;
        vector<int> passenger_changes(MAX_LOC, 0);

        // Apply the difference array trick
        for (const auto& trip : trips) {
            int numPassengers = trip[0];
            int from = trip[1];
            int to = trip[2];

            passenger_changes[from] += numPassengers;
            passenger_changes[to] -= numPassengers;
        }

        // Prefix sum to get current passenger count at each point
        int current_passengers = 0;
        for (int i = 0; i < MAX_LOC; ++i) {
            current_passengers += passenger_changes[i];
            if (current_passengers > capacity) {
                return false;
            }
        }

        return true;
    }
};
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Max heap to store the k closest points based on their distance from the origin
        priority_queue<pair<int, pair<int, int>>> p;
        
        // Iterate over each point
        for (int i = 0; i < points.size(); i++) {
            // Calculate the squared distance from the origin
            int distance = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            
            // Push the distance and corresponding point to the max heap
            p.push({distance, {points[i][0], points[i][1]}});
            
            // If the heap size exceeds k, remove the farthest point
            if (p.size() > k) {
                p.pop();
            }
        }
        
        // Vector to store the k closest points
        vector<vector<int>> ans;
        
        // Extract points from the heap
        while (k--) {
            pair<int, int> q = p.top().second;
            ans.push_back({q.first, q.second});
            p.pop();
        }
        
        return ans;
    }
};

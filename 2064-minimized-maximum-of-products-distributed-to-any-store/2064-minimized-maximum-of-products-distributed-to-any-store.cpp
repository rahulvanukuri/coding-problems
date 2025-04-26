class Solution {
public:
    bool maxele(int n, vector<int>& q, int p) {
        int cnt = 0;
        for (int i = 0; i < q.size(); i++) { // fix: i < q.size()
            cnt += (q[i] + p - 1) / p; // ceiling division
        }
        return cnt <= n;
    }

    int minimizedMaximum(int n, vector<int>& quantities) {
        int l = 1, h = *max_element(quantities.begin(), quantities.end());
        int ans = -1;
        while (l <= h) {
            int m = (l + h) / 2;
            if (maxele(n, quantities, m)) {
                ans = m;
                h = m - 1; 
            } else {
                l = m + 1; 
            }
        }
        return ans;
    }
};

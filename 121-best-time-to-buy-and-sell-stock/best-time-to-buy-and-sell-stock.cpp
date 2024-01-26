class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size(), ans = 0;
        vector<int> t;

        t.push_back(p[0]);

        for(int i=1; i<n; i++){
            t.push_back(min(t[i-1], p[i]));
        }

        for(int i=0; i<n; i++){
            ans = max(ans, p[i] - t[i]);
        }

        return ans;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size(), mini = INT_MAX, ans = 0;

        for(int i=0; i<n; i++){
            ans = max(ans, p[i] - mini);
            mini = min(p[i], mini);
        }

        return ans;
    }
};
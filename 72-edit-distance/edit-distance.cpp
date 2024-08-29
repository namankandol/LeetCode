class Solution {
public:
    int dp[501][501];
    int solve(int n, int m, string& s1, string& s2){
        if(n == 0) return m;
        if(m == 0) return n;

        if(dp[n][m]!=-1) return dp[n][m];

        if(s1[n-1] == s2[m-1]) return dp[n][m] = solve(n-1, m-1, s1, s2); 

        int del = solve(n-1, m, s1, s2);
        int ins = solve(n, m-1, s1, s2);
        int rep = solve(n-1, m-1, s1, s2);

        return dp[n][m] = 1 + min({del, ins, rep});
    }
    int minDistance(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        memset(dp, -1, sizeof dp);
        return solve(n, m, s1, s2);
    }
};
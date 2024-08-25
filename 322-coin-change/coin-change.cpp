class Solution {
public:
    int n;
    int dp[13][10001];
    int solve(int i, int amt, vector<int> & coins){
        if(amt == 0) return 0;
        if(i == n) return 1e9;
        if(dp[i][amt]!=-1) return dp[i][amt];
        int take = 1e9;
        if(coins[i] <= amt) take = 1 + solve(i, amt-coins[i], coins);
        int notTake = solve(i+1, amt, coins);
        return dp[i][amt] = min(take, notTake);
    }
    int coinChange(vector<int> & coins, int amount) {
        n = coins.size();
        memset(dp, -1, sizeof dp);
        return solve(0, amount, coins) == 1e9 ? -1 : solve(0, amount, coins); 
    }
};
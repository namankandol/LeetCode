class Solution {
public:
    int dp[201][20001];
    bool solve(int n, int tar, vector<int>& nums){
        if(tar == 0) return true;
        if(tar < 0 || n == 0) return false;
        if(dp[n][tar]!=-1) return dp[n][tar];
        return dp[n][tar] = solve(n-1, tar-nums[n-1], nums) || solve(n-1, tar, nums);
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(auto i: nums) sum += i;
        memset(dp, -1, sizeof dp);
        if(sum%2!=0) return false;
        else return solve(n, sum/2, nums);
    }
};
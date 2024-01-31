class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int tar) {
        int n = nums.size();
        set<vector<int>> st;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                set<long long> fst;
                for(int k=j+1; k<n; k++){
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    long long need = tar - sum;
                    if(fst.find(need) != fst.end()){
                        vector<int> sub = {
                            nums[i], nums[j], nums[k], (int)(need)};
                        sort(sub.begin(), sub.end());
                        st.insert(sub);
                    }
                    fst.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};
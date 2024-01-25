class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int k = n+1, l = 0;
        for(int i=0; i<n-1; i++){
            if(nums[i] < nums[i+1]) k = i;
        }
        for(int i=k; i<n; i++){
            if(nums[k] < nums[i]) l = i;
        }
        cout<<k<<" "<<l<<endl;

        if(k == n+1) sort(begin(nums), end(nums));
        else {
            swap(nums[k], nums[l]);
            reverse(begin(nums)+k+1, end(nums));
        }
    }
};
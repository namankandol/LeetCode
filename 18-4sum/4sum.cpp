class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int tar) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        for(int i=0; i<n; i++){
            if(i>0 and nums[i] == nums[i-1]) continue;
            for(int j=i+1; j<n; j++){
                if(j>i+1 and nums[j] == nums[j-1]) continue;
                int k = j+1, l = n-1;
                while(k<l){
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if(sum == tar){
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        v.push_back(temp);
                        k++;
                        l--;
                        while(k<l and nums[k] == nums[k-1]) k++;
                        while(k<l and nums[l] == nums[l+1]) l--;
                    }
                    else if(sum > tar) l--;
                    else k++;
                }  
            }
        }
        return v;
    }
};
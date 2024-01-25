class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size(), i = 0, j = n-1, m = i;
        
        while(m<=j){
            if(nums[m] == 2){
                swap(nums[m], nums[j]);
                j--;
            }
            else if(nums[m] == 0){
                swap(nums[m], nums[i]);
                m++;
                i++;
            }
            else{
                m++;
            }
        }

    }
};
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int s = nums[0], f = nums[0];

        while(1){
            s = nums[s];
            f = nums[nums[f]];

            if(s == f) break;
        }

        f = nums[0];

        while(s != f){
            s = nums[s];
            f = nums[f];
        }

        return s;
    }
};

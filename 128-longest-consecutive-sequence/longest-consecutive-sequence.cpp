class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size(), maxi = 0;
        set<int> st;
        for(int i=0; i<n; i++) st.insert(nums[i]);
        for(auto it: st){
            int count = 0;
            if(st.find(it-1) == st.end()){
                int curr = it;
                while(st.find(curr++) != st.end()){
                    count++;
                }
                maxi = max(maxi, count);
            }
            else continue;
        }

        return maxi;
    }
};
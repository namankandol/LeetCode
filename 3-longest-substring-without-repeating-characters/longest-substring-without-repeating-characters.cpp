class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(), maxi = 0;
        if(n == 0 || n == 1) return n; 

        unordered_map<char, int> mp;
        mp[s[0]] = 0;

        for(int i=0, j=i+1; j<n; j++){
            if(mp.find(s[j]) != mp.end()) {
                i = max(i, mp[s[j]] + 1);
            } 
            mp[s[j]] = j;
            maxi = max(maxi, j-i+1);
        }

        return maxi;
    }
};
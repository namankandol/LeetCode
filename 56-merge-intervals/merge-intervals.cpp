class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(), a.end());

        int n = a.size(), l = a[0][0], h = a[0][1];
        vector<vector<int>> v;

        for(int j=1; j<n; ){
            if(h >= a[j][0]){
                h = max(h, a[j][1]);
                j++;
            }
            else {
                v.push_back({l, h});
                l = a[j][0];
                h = a[j][1];
                j++;
            }
        }

        v.push_back({l, h});

        return v;
    }
};
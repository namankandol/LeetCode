class Solution {
public:
    vector<vector<int>> generate(int num) {
        vector<vector<int>> v;
        v.push_back({1});

        while(--num){
            vector<int> t;
            vector<int> curr = v.back();
            for(int i=0; i<=curr.size(); i++){
                if(i == 0) t.push_back(curr[i]);
                else if(i == curr.size()) t.push_back(curr[i-1]);
                else t.push_back(curr[i]+curr[i-1]);
            }
            v.push_back(t);
        }

        return v;
    }
};
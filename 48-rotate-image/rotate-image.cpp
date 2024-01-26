class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        int n = a.size();

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j<n-1-i){
                    swap(a[i][j], a[n-1-j][n-1-i]);
                }
            }
        }

        for(int i=0; i<n/2; i++){
            for(int j=0; j<n; j++){
                swap(a[i][j], a[n-1-i][j]);
            }
        }
    }
};
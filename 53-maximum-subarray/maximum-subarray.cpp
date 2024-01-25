class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int i=0, j=0, n = a.size(), sum = 0, maxi = INT_MIN;

        while(j<n){
            sum += a[j];
            j++;
            maxi = max(sum, maxi);
            if(sum < 0){
                i = j;
                sum = 0;
            }
        }

        return maxi;
    }
};
// sum = 5 maxi = 6
// [-2,1,-3,4,-1,2,1,-5,4]
//   i
//   j
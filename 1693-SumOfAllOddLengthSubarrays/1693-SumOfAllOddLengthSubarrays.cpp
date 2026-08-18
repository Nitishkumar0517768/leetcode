// Last updated: 8/18/2026, 11:49:47 AM
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0;
        int n = arr.size();

        for(int i=1; i<=n; i+=2){
            int sum = 0;
            int k = 0;
            for(int j=0; j<n; j++){
                sum += arr[j];
                if(j-k+1 > i){
                    sum -= arr[k];
                    k++;
                }

                if(j-k+1 == i){
                    ans += sum;
                }
            }
        }
        return ans;
    }
};
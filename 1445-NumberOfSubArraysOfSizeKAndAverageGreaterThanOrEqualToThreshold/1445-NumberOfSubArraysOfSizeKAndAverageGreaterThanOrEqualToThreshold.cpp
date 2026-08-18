// Last updated: 8/18/2026, 11:50:39 AM
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0;
        int left = 0;
        int sum = 0;

        for(int right=0; right<arr.size(); right++){
            sum += arr[right];

            if(right-left+1 > k){
                sum -= arr[left];
                left++;
            }

            if(right-left+1 == k){
                float avg = sum/k;
                if(avg >= threshold){
                    count++;
                }
            }
        }
        return count;
    }
};
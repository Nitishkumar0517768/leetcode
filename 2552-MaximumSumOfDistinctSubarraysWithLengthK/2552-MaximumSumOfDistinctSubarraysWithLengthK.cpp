// Last updated: 8/18/2026, 11:47:08 AM
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int left = 0;
        long long int sum = 0;
        long long int ans = 0;
        
        for(int right=0; right<nums.size(); right++){
            sum+=nums[right];
            freq[nums[right]]++;

            if(right-left+1 > k){
                sum -= nums[left];
                freq[nums[left]]--;

                if(freq[nums[left]]==0){
                    freq.erase(nums[left]);
                }
                left++;
            }
            if(freq.size()==k){
                ans = max(ans,sum);
            }
        }
        return ans;
    }
};
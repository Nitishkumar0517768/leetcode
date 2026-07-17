// Last updated: 7/17/2026, 5:12:18 PM
1class Solution {
2public:
3    long long maximumSubarraySum(vector<int>& nums, int k) {
4        unordered_map<int,int> freq;
5        int left = 0;
6        long long int sum = 0;
7        long long int ans = 0;
8        
9        for(int right=0; right<nums.size(); right++){
10            sum+=nums[right];
11            freq[nums[right]]++;
12
13            if(right-left+1 > k){
14                sum -= nums[left];
15                freq[nums[left]]--;
16
17                if(freq[nums[left]]==0){
18                    freq.erase(nums[left]);
19                }
20                left++;
21            }
22            if(freq.size()==k){
23                ans = max(ans,sum);
24            }
25        }
26        return ans;
27    }
28};
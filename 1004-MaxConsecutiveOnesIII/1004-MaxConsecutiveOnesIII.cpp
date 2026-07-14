// Last updated: 7/14/2026, 2:23:35 PM
1class Solution {
2public:
3    int longestOnes(vector<int>& nums, int k) {
4        int left = 0;
5        int zeros = 0;
6        int ans = 0;
7
8        for (int right = 0; right < nums.size(); right++) {
9
10            if (nums[right] == 0)
11                zeros++;
12
13            while (zeros > k) {
14                if (nums[left] == 0)
15                    zeros--;
16                left++;
17            }
18
19            ans = max(ans, right - left + 1);
20        }
21        return ans;
22    }
23};
// Last updated: 8/2/2026, 9:21:47 PM
1class Solution {
2public:
3    vector<int> separateDigits(vector<int>& nums) {
4        vector<int> ans;
5
6        for(int i=0; i<nums.size(); i++){
7            string temp = to_string(nums[i]);
8
9            for(int j=0; j<temp.size(); j++){
10                ans.push_back(temp[j]-'0');
11            }
12        }
13        return ans;
14    }
15};
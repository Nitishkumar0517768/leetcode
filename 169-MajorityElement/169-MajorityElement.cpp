// Last updated: 4/7/2026, 11:10:43 AM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        unordered_map <int, int> freq;
5
6        for(int i=0; i<nums.size(); i++){
7        
8                freq[nums[i]]++;
9            
10            if(freq[nums[i]] > nums.size()/2){
11                return nums[i];
12            }
13        }
14        return 0;
15    }
16};
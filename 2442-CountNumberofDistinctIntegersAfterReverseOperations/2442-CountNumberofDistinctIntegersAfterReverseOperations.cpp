// Last updated: 8/6/2026, 3:34:50 PM
1class Solution {
2public:
3    int countDistinctIntegers(vector<int>& nums) {
4        set<int> s;
5
6        for(int i=0; i<nums.size(); i++){
7            s.insert(nums[i]);
8            int rev = 0;
9            int n = nums[i];
10            while(n>0){
11                rev = rev*10 + n%10;
12                n /= 10;
13            }
14            s.insert(rev);
15        }
16        return s.size();
17    }
18};
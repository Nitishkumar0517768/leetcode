// Last updated: 8/17/2026, 3:12:39 PM
1class Solution {
2public:
3    int minIncrementForUnique(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        int count = 0;
7
8        for(int i=1; i<nums.size(); i++){
9            if(nums[i] <= nums[i-1]){
10                while(nums[i] <= nums[i-1]){
11                    nums[i]++;
12                    count++;
13                }
14            }
15        }
16        return count;
17
18
19        // method - 2 (TLE 56/64)
20        // unordered_set<int> st;
21        // int count = 0;
22
23        // for(int i=0; i<nums.size(); i++){
24        //     while(st.count(nums[i])){
25        //         nums[i]++;
26        //         count++;
27        //     }
28        //     st.insert(nums[i]);
29        // }
30        // return count;
31    }
32};
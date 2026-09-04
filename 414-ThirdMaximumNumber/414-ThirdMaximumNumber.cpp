// Last updated: 9/4/2026, 3:45:29 PM
1class Solution {
2public:
3    int thirdMax(vector<int>& nums) {
4
5        if(nums.size() == 1){
6            return nums[0];
7        }
8
9        if(nums.size() == 2){
10            if(nums[0] > nums[1]){
11                return nums[0];
12            }
13            else{
14                return nums[1];
15            }
16        }
17
18        long int max = LONG_MIN; 
19        long int sec = LONG_MIN;
20        long int third = LONG_MIN;
21
22        for(int i=0; i<nums.size(); i++){
23            if(nums[i]  == max || nums[i] == sec || nums[i] == third){
24                continue;
25            }
26            if(nums[i] > max){
27                third = sec;
28                sec = max;
29                max = nums[i];
30            }
31            else if(nums[i] > sec ){
32                third = sec;
33                sec = nums[i];
34            }
35            else if(nums[i] > third ){
36                third = nums[i];
37            }
38        }
39
40        if(third == LONG_MIN){
41            return max;
42        }
43        return third;
44    }
45};
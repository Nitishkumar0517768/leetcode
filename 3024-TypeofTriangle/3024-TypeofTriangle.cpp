// Last updated: 4/24/2026, 9:31:42 AM
1class Solution {
2public:
3    string triangleType(vector<int>& nums) {
4    int a = nums[0];
5    int b = nums[1];
6    int c = nums[2];
7
8    if(nums[0] == nums[1] && nums[1] == nums[2]){
9        return "equilateral";
10    }   
11    
12    if(a+b > c && b+c > a && a+c > b){
13        if(a==b || b==c || a==c){
14            return "isosceles";
15        }
16        else{
17            return "scalene";
18        }
19    }
20    else{
21        return "none";
22    }
23    }
24};
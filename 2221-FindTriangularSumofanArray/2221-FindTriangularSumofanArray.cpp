// Last updated: 8/6/2026, 3:26:15 PM
1class Solution {
2public:
3    int triangularSum(vector<int>& nums) {
4        if(nums.size() == 1)
5        return nums[0];
6
7        string temp1 = "";
8        string temp2 = "";
9
10        for(int i=0; i<nums.size(); i++){
11            temp1 += to_string(nums[i]);
12        }
13
14        while(true){
15            int sum = 0;
16            for(int i=0; i<temp1.size()-1; i++){
17                sum = ((temp1[i]-'0') + (temp1[i+1]-'0')) % 10;
18                temp2 += to_string(sum);
19            }
20            temp1 = temp2;
21            temp2 = "";
22            if(temp1.size() == 1){
23                return stoi(temp1);
24            }
25        }
26        return -1;
27    }
28};
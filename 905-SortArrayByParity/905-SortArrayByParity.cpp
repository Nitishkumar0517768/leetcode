// Last updated: 5/22/2026, 8:49:16 PM
1class Solution {
2public:
3    vector<int> sortArrayByParity(vector<int>& nums) {
4        int i = 0;
5        int j = nums.size()-1;
6
7        while(j>i){
8            if(nums[i]%2==1 && nums[j]%2==0){
9                int temp = nums[i];
10                nums[i] = nums[j];
11                nums[j] = temp;
12                i++;
13                j--;
14            }
15            else if(nums[i]%2==0){
16                i++;
17            }
18            else if(nums[j]%2 == 1){
19                j--;
20            }
21        }
22        return nums;
23    }
24};
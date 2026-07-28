// Last updated: 7/28/2026, 4:49:26 PM
1class Solution {
2public:
3    vector<int> leftRightDifference(vector<int>& nums) {
4        vector<int>left;
5        vector<int>right;
6        left.push_back(0);
7        right.insert(right.begin(),0);
8
9        int sumL = 0;
10        int sumR = 0;
11        int j=nums.size()-1;
12
13        for(int i=0; i<nums.size(); i++){
14            if(left.size() == nums.size()){
15                break;
16            }
17            sumL += nums[i];
18            left.push_back(sumL);
19
20            sumR += nums[j];
21            right.insert(right.begin(), sumR);
22            j--;
23        }
24
25        for(int k=0; k<left.size(); k++){
26            int diff = abs(left[k]-right[k]);
27            left[k] = diff;
28        }
29        return left;
30    }
31};
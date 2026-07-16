// Last updated: 7/16/2026, 3:39:53 PM
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int left = 0;
5        int right = height.size()-1;
6        int max = 0;
7
8        while(right > left){
9            int temp = 0;
10            int mini = min(height[left], height[right]);
11            temp = mini * (right-left);
12
13            if(temp > max){
14                max = temp;
15            }
16
17            if(height[left] > height[right]){
18                right--;
19            }
20            else{
21                left++;
22            }
23        }
24        return max;
25    }
26};
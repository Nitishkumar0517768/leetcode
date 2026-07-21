// Last updated: 7/21/2026, 4:06:44 PM
1class Solution {
2public:
3    int maxScore(vector<int>& cardPoints, int k) {
4
5        int n = cardPoints.size();
6
7        int sum = 0;
8
9        for(int i = 0; i < k; i++)
10            sum += cardPoints[i];
11
12        int maxSum = sum;
13
14        int left = k - 1;
15        int right = n - 1;
16
17        while(left >= 0){
18
19            sum -= cardPoints[left];
20            sum += cardPoints[right];
21
22            maxSum = max(maxSum, sum);
23
24            left--;
25            right--;
26        }
27
28        return maxSum;
29    }
30};
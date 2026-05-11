// Last updated: 5/11/2026, 11:41:54 AM
1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4
5        for(int i=digits.size()-1; i>=0; i--){
6            if(digits[i] < 9){
7                digits[i] += 1;
8                return digits;
9            } 
10            digits[i] = 0;
11            
12        }
13        digits.insert(digits.begin(), 1);
14
15        return digits;
16    }
17};
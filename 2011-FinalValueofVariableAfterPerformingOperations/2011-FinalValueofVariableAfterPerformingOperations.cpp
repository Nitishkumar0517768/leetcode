// Last updated: 4/11/2026, 2:56:21 PM
1class Solution {
2public:
3    int finalValueAfterOperations(vector<string>& operations) {
4        int inc = 0;
5        int dec = 0;
6
7        for(int i=0; i<operations.size(); i++){
8            if(operations[i] == "X++" || operations[i] == "++X"){
9                inc++;
10            }
11            else{
12                dec++;
13            }
14        }
15        return inc - dec;
16    }
17};
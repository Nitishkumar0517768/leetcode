// Last updated: 9/2/2026, 10:43:22 PM
1class Solution {
2public:
3    vector<int> minOperations(string boxes) {
4        vector<int> res;
5        for(int i = 0; i<boxes.size(); i++){
6            int moves = 0;
7
8            for(int j = 0; j<boxes.size(); j++){
9                if(boxes[j]=='1'){
10                    moves = moves + abs(i-j);
11                }
12            }
13            res.push_back(moves);
14        }
15        return res;
16    }
17};
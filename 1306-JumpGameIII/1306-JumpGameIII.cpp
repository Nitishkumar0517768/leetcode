// Last updated: 5/17/2026, 8:10:10 AM
1class Solution {
2public:
3    bool digitCount(string num) {
4        
5        for(int i=0; i<num.size(); i++){
6            int count = 0;
7            for(int j=0; j<num.size(); j++){
8                if( i == num[j] - '0'){
9                    count++;
10                }
11            }
12            // cout << i << "->" << count << endl;
13            if(count != num[i] - '0'){
14                return false;
15            }
16        }
17        return true;
18    }
19};
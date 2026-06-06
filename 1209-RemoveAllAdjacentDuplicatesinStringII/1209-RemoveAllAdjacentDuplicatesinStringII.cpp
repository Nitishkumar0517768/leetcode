// Last updated: 6/6/2026, 11:44:23 AM
1class Solution {
2public:
3    string removeDuplicates(string s, int k) {
4        string res = "";
5
6        for(char ch : s){
7            res.push_back(ch);
8            if(res.size() >= k){
9                    int count = 1;
10                for(int i = res.size() - k + 1; i < res.size(); i++){
11                    if(res[i] != res[i-1]){
12                        break;
13                    }
14                    count++;
15                    
16                    if(count == k){
17                        for(int j=0; j<k; j++){
18                            res.pop_back();
19                        }
20                    }
21                }
22            }
23            
24        }
25        return res;
26    }
27};
// Last updated: 8/6/2026, 4:29:05 PM
1class Solution {
2public:
3    char kthCharacter(int k) {
4        string s = "a";
5        if(k == 1){
6            return s[0];
7        }
8
9        while(true){
10            int n = s.size();
11
12            for(int i=0; i<n; i++){
13                char m;
14                if(s[i] == 'z'){
15                    m = 'a'; 
16                }
17                else{
18                    m = s[i] + 1;
19                }
20                s += m;
21            }
22
23            if(s.size() >= k){
24                return s[k-1];
25            }
26        }
27        return 'a';
28    }
29};
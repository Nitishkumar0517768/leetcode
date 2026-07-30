// Last updated: 7/30/2026, 11:27:22 AM
1class Solution {
2public:
3    int compress(vector<char>& chars) {
4        int count = 1;
5        string s;
6
7        for(int i=0; i<chars.size()-1; i++){
8            if(chars[i] != chars[i+1]){
9                s += chars[i];
10                if(count > 1){
11                    s += to_string(count);
12                }
13                count = 1;
14            }
15            else{
16                count++;
17            }
18        }
19
20        s += chars.back();
21        if(count > 1){
22            s += to_string(count);
23        }
24
25        for(int i=0; i<s.size(); i++){
26            chars[i] = s[i];
27        }
28
29        return s.size();
30    }
31};
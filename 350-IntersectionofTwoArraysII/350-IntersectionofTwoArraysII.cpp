// Last updated: 6/13/2026, 10:15:20 AM
1class Solution {
2public:
3    vector<string> commonChars(vector<string>& words) {
4        string res = words[0];
5        vector<string> ans;
6
7        for(char ch : res){
8            int index;
9            for(int i=1; i<words.size(); i++){
10                index = words[i].find(ch);
11
12                if(index > -1){
13                    words[i].erase(index, 1);
14                    continue;
15                }
16                else{
17                    break;
18                }
19            }
20            if(index > -1 || words.size() == 1){
21                ans.push_back(string(1, ch));
22            }
23        }
24          
25        return ans;
26    }
27};
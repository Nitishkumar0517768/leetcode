// Last updated: 5/30/2026, 9:24:48 AM
1class Solution {
2public:
3    string reverseWords(string s) {
4        string temp = "";
5        vector<string> wordStore;
6
7        for(int i=0; i<s.length(); i++){
8            if(s[i] != ' '){
9                temp += s[i];
10            }
11            else{
12                if(!temp.empty()){
13                    wordStore.push_back(temp);
14                    temp = "";
15                }
16            }
17        }
18
19        if(!temp.empty()){
20            wordStore.push_back(temp);
21        }
22
23        string ans = "";
24
25        for(int i=wordStore.size()-1; i>=0; i--){
26            ans += wordStore[i];
27
28            if(i!=0){
29                ans += " ";
30            }
31        }
32        return ans;
33    }
34};
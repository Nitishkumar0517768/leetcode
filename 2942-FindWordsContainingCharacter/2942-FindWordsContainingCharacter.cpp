// Last updated: 4/13/2026, 1:58:25 PM
1class Solution {
2public:
3    vector<int> findWordsContaining(vector<string>& words, char x) {
4        vector<int>ans;
5
6        for(int i=0; i<words.size(); i++){
7            for(int j=0; j<words[i].size(); j++){
8                if(words[i][j] == x){
9                    ans.push_back(i);
10                    break;
11                }
12            }
13        }
14        return ans;
15    }
16};
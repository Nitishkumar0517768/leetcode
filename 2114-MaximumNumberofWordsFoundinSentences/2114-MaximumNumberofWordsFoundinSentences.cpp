// Last updated: 6/15/2026, 9:15:17 AM
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4        int count = 0;
5
6        for(int i=0; i<sentences.size(); i++){
7            int words = 1;
8            for(int j=0; j<sentences[i].size(); j++){
9                if(sentences[i][j] == ' '){
10                    words++;
11                }
12            }
13            if(words > count){
14                count = words;
15            }
16        }
17        return count;
18    }
19};
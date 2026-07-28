// Last updated: 7/28/2026, 3:19:17 PM
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4        int maxW = 0;
5
6        for(int i=0; i<sentences.size(); i++){
7            int count = 1;
8            for(int j=0; j<sentences[i].size(); j++){
9                if(sentences[i][j] == ' ' ){
10                    count++;
11                }
12            }
13            maxW = max(maxW, count);
14        }
15        return maxW;
16    }
17};
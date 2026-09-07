// Last updated: 9/7/2026, 3:31:39 PM
1class Solution {
2public:
3    string mapWordWeights(vector<string>& words, vector<int>& weights) {
4        string ans = "";
5        int sum  = 0;
6
7        for(int i=0; i<words.size(); i++){
8            for(int j=0; j<words[i].size(); j++){
9                int index = words[i][j] - 'a';
10                sum += weights[index];
11            }
12            int c = sum%26;
13            char ch = 'z' - c;
14            ans += ch;
15            sum = 0;
16        }
17
18        return ans;
19    }
20};
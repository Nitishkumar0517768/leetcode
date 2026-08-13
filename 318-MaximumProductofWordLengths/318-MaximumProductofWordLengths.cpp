// Last updated: 8/13/2026, 3:49:44 PM
1class Solution {
2public:
3    int maxProduct(vector<string>& words) {
4        int n = words.size();
5        int maxP = 0;
6
7        for(int i=0; i<n-1; i++){
8
9            unordered_set<char> st(words[i].begin(), words[i].end());
10            int s1 = words[i].size();
11            int s2 = 0;
12            int pro;
13
14            for(int j=i+1; j<n; j++){
15                int count = 0;
16                for(int k=0; k<words[j].size(); k++){
17                    if(st.find(words[j][k]) != st.end()){
18                        count = 1;
19                        break;
20                    }
21                }
22                if(count == 0){
23                    s2 = words[j].size();
24                }
25                pro = s1*s2;
26
27                maxP = max(maxP, pro);
28            }
29
30        }
31        return maxP;
32    }
33};
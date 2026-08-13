// Last updated: 8/13/2026, 3:56:48 PM
1// class Solution {
2// public:
3//     int maxProduct(vector<string>& words) {
4//         int n = words.size();
5//         int maxP = 0;
6
7//         for(int i=0; i<n-1; i++){
8
9//             unordered_set<char> st(words[i].begin(), words[i].end());
10//             int s1 = words[i].size();
11//             int s2 = 0;
12//             int pro;
13
14//             for(int j=i+1; j<n; j++){
15//                 int count = 0;
16//                 for(int k=0; k<words[j].size(); k++){
17//                     if(st.find(words[j][k]) != st.end()){
18//                         count = 1;
19//                         break;
20//                     }
21//                 }
22//                 if(count == 0){
23//                     s2 = words[j].size();
24//                 }
25//                 pro = s1*s2;
26
27//                 maxP = max(maxP, pro);
28//             }
29
30//         }
31//         return maxP;
32//     }
33// };
34
35
36
37class Solution {
38public:
39    bool check(string str1 , string str2){
40        vector<bool> freq(26 , false);
41        for(char ch : str1){
42            freq[ch-'a'] = true;
43        }
44        for(char ch : str2){
45            if(freq[ch-'a']){
46                return false;
47            }
48        }
49        return true;
50    } 
51    int maxProduct(vector<string>& words) {
52        int maxi = 0;
53        for(int i =0; i<words.size() -1 ; i++){
54            for(int j = i+1 ; j<words.size() ; j++){
55                int pro = words[i].size() * words[j].size();
56                if(pro <= maxi){
57                    continue;
58                }
59                else if(check(words[i] , words[j])){
60                    maxi = max(maxi , pro);
61                }
62            }
63        }
64        return maxi;
65    }
66};
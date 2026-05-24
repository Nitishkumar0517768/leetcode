// Last updated: 5/24/2026, 2:53:53 PM
1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        sort(s.begin(), s.end());
5        sort(t.begin(), t.end());
6
7        int i=0; 
8        int j=0;
9        while(i<s.size() || j<t.size()){
10            if(s[i] != t[j]){
11                return t[j];
12            }
13            cout << s[i] << " -> " << t[j] << endl;
14            i++;
15            j++;
16        }
17        return 'a';
18    }
19};
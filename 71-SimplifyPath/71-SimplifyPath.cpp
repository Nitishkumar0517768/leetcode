// Last updated: 6/17/2026, 10:37:44 AM
1class Solution {
2public:
3    string simplifyPath(string path) {
4        int i = 1;
5        vector<string>res;
6        string pat;
7        while(i<path.size()){
8            while(i<path.size() && path[i]!='/' ){
9                pat+=path[i];
10                i++;
11            }
12            if(pat == ".."){
13                if(!res.empty())res.pop_back();
14            }
15            else if(pat == "" || pat == ".");
16            else res.push_back(pat);
17            pat="";
18            i++;
19        }
20        pat = "";
21        for(string s:res){
22             pat=pat+'/'+s;
23        }
24        if(pat == "") return "/";
25        return pat;
26    }
27};
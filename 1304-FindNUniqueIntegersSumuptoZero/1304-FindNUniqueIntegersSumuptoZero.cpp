// Last updated: 6/6/2026, 2:02:38 PM
1class Solution {
2public:
3    vector<int> sumZero(int n) {
4        vector<int> ans;
5
6        if(n%2==1){
7            ans.push_back(0);
8        }
9        if(n==1) return ans;
10        for(int i=1; i<=n/2; i++){
11            ans.push_back(i);
12            ans.push_back(-i);
13        }
14        return ans;
15    }
16};
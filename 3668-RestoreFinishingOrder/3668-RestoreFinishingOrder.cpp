// Last updated: 4/11/2026, 2:50:21 PM
1class Solution {
2public:
3    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
4        int n = 0;
5
6        for(int i=0; i<order.size(); i++){
7            for(int j=0+n; j<friends.size(); j++){
8                if(order[i] == friends[j]){
9                    int temp = friends[j];
10                    friends[j] = friends[n];
11                    friends[n] = temp;
12                    n++;
13                }
14            }
15        }
16        return friends;
17    }
18};
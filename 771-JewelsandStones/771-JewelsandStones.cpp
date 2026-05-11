// Last updated: 5/11/2026, 9:22:44 AM
1class Solution {
2public:
3    int numJewelsInStones(string jewels, string stones) {
4        int count = 0;
5
6        for(int i=0; i<jewels.size(); i++){
7            if(jewels[i] == jewels[i+1]){
8                continue;
9            }
10            for(int j=0; j<stones.size(); j++){
11                if(jewels[i] == stones[j]){
12                    count++;
13                }
14            }
15        }
16        return count;
17    }
18};
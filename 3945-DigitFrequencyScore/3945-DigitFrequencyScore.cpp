// Last updated: 6/6/2026, 1:31:19 PM
1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4        unordered_map<int,int> freq;
5
6        int i=n;
7        while(i>0){
8            int digit = i%10;
9            freq[digit]++;
10            i=i/10;
11        }
12
13        int sum = 0;
14
15        for(auto it : freq){
16            sum = sum + (it.first*it.second);
17        }
18        return sum;
19    }
20};
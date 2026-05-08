// Last updated: 5/8/2026, 10:19:28 AM
1class Solution {
2public:
3    bool threeConsecutiveOdds(vector<int>& arr) {
4        if(arr.size() < 3) return false;
5        for(int i=0; i<arr.size()-2; i++){
6            if(arr[i]%2==1 && arr[i+1]%2==1 && arr[i+2]%2==1) return true;
7        }
8        return false;
9    }
10};
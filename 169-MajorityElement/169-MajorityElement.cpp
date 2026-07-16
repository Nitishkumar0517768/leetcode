// Last updated: 7/16/2026, 9:30:04 PM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        // unordered_map<int, int> freq;
5        // int n = nums.size();
6
7        // for(int i=0; i<n; i++){
8        //     freq[nums[i]]++;
9            
10        //     if(freq[nums[i]] > n/2){
11        //         return nums[i];
12        //     }
13        // }
14        // return -1;
15
16        int n = 0;
17        int count = 0;
18
19        for(int num : nums){
20            if(count == 0){
21                n = num;
22            }
23            if(num == n){
24                count++;
25            }
26            else{
27                count--;
28            }
29        }
30        return n;
31    }
32};
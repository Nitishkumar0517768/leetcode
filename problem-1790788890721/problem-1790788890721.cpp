// Last updated: 9/30/2026, 10:51:30 PM
1class Solution {
2
3public: int firstOccurence(vector<int>& arr, int target){
4    int low = 0;
5    int high = arr.size() - 1;
6    int ans = -1;
7
8    while(low <= high){
9        int mid = low + (high-low)/2;
10        
11        if(arr[mid] == target){
12            ans = mid;
13            high = mid - 1;
14        }
15        else if(arr[mid] > target){
16            high = mid - 1;
17        }
18        else{
19            low = mid + 1;
20        }
21    }
22
23    return ans;
24}
25
26public: int lastOccurence(vector<int>& arr, int target){
27    int low = 0;
28    int high = arr.size() - 1;
29    int ans = -1;
30
31    while(low <= high){
32        int mid = low + (high - low)/2;
33
34        if(arr[mid] == target){
35            ans = mid;
36            low = mid + 1;
37        }
38        else if(arr[mid] > target){
39            high = mid - 1;
40        }
41        else{
42            low = mid + 1;
43        }
44    }
45    return ans;
46}
47
48
49public:
50    vector<int> searchRange(vector<int>& nums, int target) {
51        int first = firstOccurence(nums, target);
52        int last = lastOccurence(nums, target);
53
54        return {first, last};
55    }
56};
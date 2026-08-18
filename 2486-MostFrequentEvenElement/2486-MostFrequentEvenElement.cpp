// Last updated: 8/18/2026, 11:47:26 AM
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> freq;

        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }

        int count = 0;
        int res = -1;

        for(auto it : freq){
            if(it.first % 2 == 0){
                if(it.second > count){
                    count = it.second;
                    res = it.first;
                }
                else if(it.second == count && it.first < res){
                    res = it.first;
                }
            }
        }
        return res;
    }
};
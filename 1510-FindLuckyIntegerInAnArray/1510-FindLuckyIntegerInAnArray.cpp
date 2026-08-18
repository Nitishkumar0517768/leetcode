// Last updated: 8/18/2026, 11:50:24 AM
class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;

        for (int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++;
        }

        int res = -1;

        for (auto& it : freq) {
            cout << it.first << " -> " << it.second << endl;
            if(it.first == it.second && it.first > res){
                res = it.first;
            }
        }
        return res;
    }
};
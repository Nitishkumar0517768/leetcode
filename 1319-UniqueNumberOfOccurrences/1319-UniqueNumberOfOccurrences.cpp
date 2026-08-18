// Last updated: 8/18/2026, 11:51:06 AM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(int i=0; i<arr.size(); i++){
            freq[arr[i]]++;
        }

        unordered_set<int> st;
        for(auto &it : freq){
            if(!st.count(it.second)){
                st.insert(it.second);
            }
            else{
                return false;
            }
        }
        return true;
    }
};
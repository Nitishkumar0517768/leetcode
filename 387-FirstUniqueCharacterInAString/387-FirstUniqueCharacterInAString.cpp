// Last updated: 8/18/2026, 11:53:01 AM
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;

        for(int i=0; i<s.size(); i++){
            freq[s[i]]++;
        }

        for(int i=0; i<s.size(); i++){
            if(freq[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};
// Last updated: 8/13/2026, 10:38:08 AM
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;

        for(int i=0; i<words.size(); i++){
            for(int j=0; j<words[i].size(); j++){
                if(words[i][j] == x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};
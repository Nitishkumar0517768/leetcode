// Last updated: 8/18/2026, 11:51:37 AM
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        string res = words[0];
        vector<string> ans;

        for(char ch : res){
            int index;
            for(int i=1; i<words.size(); i++){
                index = words[i].find(ch);

                if(index > -1){
                    words[i].erase(index, 1);
                    continue;
                }
                else{
                    break;
                }
            }
            if(index > -1 || words.size() == 1){
                ans.push_back(string(1, ch));
            }
        }
          
        return ans;
    }
};
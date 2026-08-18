// Last updated: 8/18/2026, 11:54:18 AM
class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        vector<string> wordStore;

        for(int i=0; i<s.length(); i++){
            if(s[i] != ' '){
                temp += s[i];
            }
            else{
                if(!temp.empty()){
                    wordStore.push_back(temp);
                    temp = "";
                }
            }
        }

        if(!temp.empty()){
            wordStore.push_back(temp);
        }

        string ans = "";

        for(int i=wordStore.size()-1; i>=0; i--){
            ans += wordStore[i];

            if(i!=0){
                ans += " ";
            }
        }
        return ans;
    }
};
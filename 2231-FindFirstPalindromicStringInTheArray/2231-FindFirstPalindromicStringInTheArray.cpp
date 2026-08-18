// Last updated: 8/18/2026, 11:48:18 AM
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0; i<words.size(); i++){
            int j=0;
            int k=words[i].size()-1;
            int check = 1;

            while(k>j){
                if(words[i][j] != words[i][k]){
                    check = 0;
                    break;
                }
                j++;
                k--;
            }
            if(check == 1){
                return words[i];
            }
        }
        return "";
    }
};
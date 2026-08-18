// Last updated: 8/18/2026, 11:48:31 AM
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int j = 0;
        for(int i=0; i<word.size(); i++){
            if(word[i] == ch){
                while(i>j){
                    swap(word[i], word[j]);
                    j++;
                    i--;
                }
                return word;
            }

        }
        return word;
    }
};
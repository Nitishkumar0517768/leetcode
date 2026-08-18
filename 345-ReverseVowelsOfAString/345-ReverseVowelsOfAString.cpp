// Last updated: 8/18/2026, 11:53:09 AM
class Solution {
public:
    string reverseVowels(string s) {
        string v = "";

        for(int i=0; i<s.size(); i++){
            if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u'){
                v.push_back(s[i]);
            }
        }

        int n = v.size()-1;

        for(int i=0; i<s.size(); i++){
            if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u'){
                s[i] = v[n];
                n--;
            }
        }
        return s;
    }
};
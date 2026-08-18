// Last updated: 8/18/2026, 11:52:52 AM
class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1;
        string s;

        for(int i=0; i<chars.size()-1; i++){
            if(chars[i] != chars[i+1]){
                s += chars[i];
                if(count > 1){
                    s += to_string(count);
                }
                count = 1;
            }
            else{
                count++;
            }
        }

        s += chars.back();
        if(count > 1){
            s += to_string(count);
        }

        for(int i=0; i<s.size(); i++){
            chars[i] = s[i];
        }

        return s.size();
    }
};
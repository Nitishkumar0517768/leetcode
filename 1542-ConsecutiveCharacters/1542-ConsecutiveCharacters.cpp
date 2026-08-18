// Last updated: 8/18/2026, 11:50:17 AM
class Solution {
public:
    int maxPower(string s) {

        if(s.size() == 1) return 1;

        int count = 1;
        int res = 0;

        for(int i=0; i<s.size()-1; i++){
            if(s[i] == s[i+1]){
                count++;
            }
            else{
                count = 1;
            }
            if(count > res){
                res = count;
            }
        }
        return res;
    }
};
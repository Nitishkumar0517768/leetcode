// Last updated: 8/13/2026, 10:38:48 AM
class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        string max = "";
        string min = "";
        char minNum = s[0];
        int check = 0;
        char maxNum;

        for(int i=0; i<s.size(); i++){
            if(s[i] != '9' && check == 0){
                maxNum = s[i];
                check = 1;
            }

            if(s[i] == minNum){
                min += '0';
            }else{
                min += s[i];
            }

            if(s[i] == maxNum){
                max += '9';
            }else{
                max += s[i];
            }
        }

        return stoi(max) - stoi(min);
    }
};
// Last updated: 8/13/2026, 10:37:00 AM
class Solution {
public:
    bool hasSameDigits(string s) {
        string temp1 = s;
        
        while(true){
            string temp2 = temp1;
            temp1 = "";

            for(int i=0; i<temp2.size()-1; i++){
                int n = temp2[i] - '0';
                int m = temp2[i+1] - '0';

                temp1 += to_string((m+n)%10);
            }

            if(temp1.size() == 2){
                if(temp1[0] == temp1[1]){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};
// Last updated: 8/18/2026, 11:55:01 AM
class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
        return "1";

        string temp1 = "1";
        string temp2 = "";

        for(int i=2; i<=n; i++){
            int count = 1;
            for(int j=0; j<temp1.size()-1; j++){
                if(temp1[j] == temp1[j+1]){
                    count++;
                }
                else{
                    temp2 += to_string(count);
                    temp2 += temp1[j];
                    count = 1;
                }
            }

            temp2 += to_string(count);
            temp2 += temp1.back();

            temp1 = temp2;
            temp2 = "";
        }
        return temp1;
    }
};
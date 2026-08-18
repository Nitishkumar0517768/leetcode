// Last updated: 8/18/2026, 11:48:47 AM
class Solution {
public:
    int getLucky(string s, int k) {
        string m = "";
        string temp1;

        for(int i=0; i<s.size(); i++){
            int temp = s[i] - 'a' + 1;
            m += to_string(temp);
        }

        temp1 = m;

        for(int j=0; j<k; j++){
            int sum = 0;
            for(int l=0; l<temp1.size(); l++){
                sum += temp1[l] - '0';
            }
            temp1 = to_string(sum);
        }

        return stoi(temp1);
    }
};
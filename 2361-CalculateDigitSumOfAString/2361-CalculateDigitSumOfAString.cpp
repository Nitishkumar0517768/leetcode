// Last updated: 8/18/2026, 11:47:39 AM
class Solution {
public:
    string digitSum(string s, int k) {
        string temp1 = s;
        string temp2 = "";

        while (true) {
            int sum = 0;
            int count = 0;

            if (temp1.size() <= k) {
                return temp1;
            }
            for (int i = 0; i < temp1.size(); i++) {
                sum += temp1[i] - '0';
                count++;

                if (count == k) {
                    temp2 += to_string(sum);
                    sum = 0;
                    count = 0;
                }

 
                if (i == temp1.size() - 1 && count > 0) {
                    temp2 += to_string(sum);
                }
            }


            temp1 = temp2;
            temp2 = "";
        }
    }
};
// Last updated: 8/18/2026, 11:52:45 AM
class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        for (int j = 0; j < s.size(); j++) {

            if (s[j] == ' ' || j == s.size() - 1) {
                int k;

                if (j == s.size() - 1)
                    k = j;
                else
                    k = j - 1;

                int l = i;

                while (k > l) {
                    swap(s[k], s[l]);
                    k--;
                    l++;
                }

                i = j + 1;
            }
        }
        return s;
    }
};
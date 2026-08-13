// Last updated: 8/13/2026, 10:36:06 AM
class Solution {
public:
    string reversePrefix(string s, int k) {
        reverse(s.begin(), s.begin()+k);

        return s;
    }
};
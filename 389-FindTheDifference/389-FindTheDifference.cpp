// Last updated: 8/18/2026, 11:52:58 AM
class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        int i = 0;
        int j = 0;
        while (i < s.size() || j < t.size()) {
            if (s[i] != t[j]) {
                return t[j];
            }
            cout << s[i] << " -> " << t[j] << endl;
            i++;
            j++;
        }
        return 'a';
    }
};
// Last updated: 8/18/2026, 11:49:01 AM
class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> res(sentence.begin(), sentence.end());

        if(res.size() < 26) return false;

        return true;
    }
};
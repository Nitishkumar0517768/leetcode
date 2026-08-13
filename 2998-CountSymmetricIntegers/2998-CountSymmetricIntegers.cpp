// Last updated: 8/13/2026, 10:38:14 AM
class Solution {
public:
    bool isSymmetric(int num) {
        string s = to_string(num);

        if (s.size() % 2 != 0)
            return false;

        int n = s.size();
        int leftSum = 0, rightSum = 0;

        for (int i = 0; i < n / 2; i++)
            leftSum += s[i] - '0';

        for (int i = n / 2; i < n; i++)
            rightSum += s[i] - '0';

        return leftSum == rightSum;
    }

    int countSymmetricIntegers(int low, int high) {
        int ans = 0;

        for (int i = low; i <= high; i++) {
            if (isSymmetric(i))
                ans++;
        }

        return ans;
    }
};
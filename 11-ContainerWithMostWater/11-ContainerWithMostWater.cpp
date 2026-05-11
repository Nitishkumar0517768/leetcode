// Last updated: 5/11/2026, 8:06:17 AM
#include <algorithm>

class Solution {
public:
    bool judgeCircle(string moves) {
        // If the number of 'U' moves is equal to the number of 'D' moves,
        // there has no been any vertical movement
        // Same for 'R' and 'L'.
        // So simply count the number of occurences of each character and 
        // check if both those conditions hold

        int x = 0;
        int y = 0;

        for (auto c : moves) {
            if (c == 'U') y += 1;
            else if (c == 'D') y -= 1;
            else if (c == 'L') x -= 1;
            else if (c == 'R') x += 1;
        }

        // int count_U = std::ranges::count(moves, 'U');
        // int count_D = std::ranges::count(moves, 'D');
        // int count_L = std::ranges::count(moves, 'L');
        // int count_R = std::ranges::count(moves, 'R');
        
        return x == 0 && y == 0;
    }
};
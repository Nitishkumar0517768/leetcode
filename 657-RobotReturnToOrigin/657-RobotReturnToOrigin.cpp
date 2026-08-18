// Last updated: 8/18/2026, 11:52:30 AM
class Solution {
public:
    bool judgeCircle(string moves) {

        // 1st

        // unordered_map<char, int> freq;

        // for(char ch : moves){
        //     freq[ch]++;
        // }
        // if(freq['L'] == freq['R']  &&  freq['U'] == freq['D']){
        //     return true;
        // }
        // return false;


        // 2nd.

        int x = 0;
        int y = 0;

        for(int i=0; i<moves.size(); i++){
            if(moves[i] == 'L') x-= 1;

            else if(moves[i] == 'R') x+= 1;

            else if(moves[i] == 'U') y+= 1;

            else y-= 1;
        } 
        return x==0 && y==0;
    }
};
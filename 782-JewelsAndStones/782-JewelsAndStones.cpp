// Last updated: 8/18/2026, 11:52:18 AM
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;

        for(int i=0; i<jewels.size(); i++){
            if(jewels[i] == jewels[i+1]){
                continue;
            }
            for(int j=0; j<stones.size(); j++){
                if(jewels[i] == stones[j]){
                    count++;
                }
            }
        }
        return count;
    }
};
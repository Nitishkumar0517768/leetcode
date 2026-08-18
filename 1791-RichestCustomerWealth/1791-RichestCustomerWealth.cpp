// Last updated: 8/18/2026, 11:49:36 AM
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum1 = 0;
        for(int i = 0; i<accounts[0].size(); i++){
            sum1 = sum1 + accounts[0][i];
        }

        for(int i=0; i<accounts.size(); i++){
            int sum2 = 0;

            for(int j=0; j<accounts[i].size(); j++){
                sum2 = sum2 + accounts[i][j];
            }
            if(sum2 > sum1){
                sum1 = sum2;
            }
        }
        return sum1;
    }
};
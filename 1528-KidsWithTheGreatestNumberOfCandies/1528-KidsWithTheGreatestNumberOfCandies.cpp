// Last updated: 8/18/2026, 11:50:21 AM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int maxC = INT_MIN;

        for(int i=0; i<candies.size(); i++){
            maxC = max(maxC, candies[i]);
        }

        for(int i=0; i<candies.size(); i++){
            if(candies[i]+extraCandies >= maxC){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        return res;
    }
};
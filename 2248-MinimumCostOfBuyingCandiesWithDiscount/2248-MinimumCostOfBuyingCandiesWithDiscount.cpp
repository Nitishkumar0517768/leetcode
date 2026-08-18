// Last updated: 8/18/2026, 11:48:15 AM
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int count = 0;
        int totalCost = 0;
        sort(cost.begin(), cost.end());

        for(int i=cost.size()-1; i>=0; i--){
            count++;
            if(count%3 == 0){
                continue;
            }
            totalCost += cost[i];
        }
        return totalCost;
    }
};
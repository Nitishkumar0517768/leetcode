// Last updated: 8/18/2026, 11:49:50 AM
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int sum = 0;
        int k = piles.size();
        int count = 0;
        int n = k/3;

        for(int i=k-2; i>=0; i-=2){
            if(count == n){
                return sum;
            }
            sum += piles[i];
            count++;
        }
        return sum;
        
    }
};
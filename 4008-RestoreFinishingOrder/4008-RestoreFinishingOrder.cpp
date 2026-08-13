// Last updated: 8/13/2026, 10:36:35 AM
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n = 0;

        for(int i=0; i<order.size(); i++){
            for(int j=0; j<friends.size(); j++){
                if(order[i] == friends[j]){
                    int temp = friends[j];
                    friends[j] = friends[n];
                    friends[n] = temp;
                    n++;
                }
            }
        }
        return friends;
    }
};
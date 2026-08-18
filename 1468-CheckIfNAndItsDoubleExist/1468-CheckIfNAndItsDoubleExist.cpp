// Last updated: 8/18/2026, 11:50:35 AM
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0; i<arr.size()-1; i++){
            for(int j=i+1; j<arr.size(); j++){
                if(arr[i] == 2*arr[j] || arr[i]*2 == arr[j]){
                    return true;
                }
            }
        }
        return false;
    }
};
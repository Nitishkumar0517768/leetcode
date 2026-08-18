// Last updated: 8/18/2026, 11:51:08 AM
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;

        sort(arr.begin(), arr.end());
        int diff = INT_MAX;

        for(int i=0; i<arr.size()-1; i++){
            if(abs(arr[i+1] - arr[i]) < diff){
                diff = abs(arr[i+1] - arr[i]);
            }
        }

        for(int j=0; j<arr.size()-1; j++){
            if(abs(arr[j+1] - arr[j]) == diff){
                vector<int> temp;
                temp.push_back(arr[j]);
                temp.push_back(arr[j+1]);
                res.push_back(temp);
            }
        }
        return res;
    }
};
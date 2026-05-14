// Last updated: 5/14/2026, 8:46:24 AM
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());

        int mini = INT_MAX;

        for(int i = 1; i < arr.size(); i++) {
            mini = min(mini, arr[i] - arr[i - 1]);
        }

        vector<vector<int>> ans;

        for(int i = 1; i < arr.size(); i++) {
            
            if(arr[i] - arr[i - 1] == mini) {
                ans.push_back({arr[i - 1], arr[i]});
            }
        }

        return ans;
    }
};
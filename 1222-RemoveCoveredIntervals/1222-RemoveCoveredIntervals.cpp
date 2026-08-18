// Last updated: 8/18/2026, 11:51:16 AM
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int ans = intervals.size();

        for(int i=0; i<intervals.size(); i++){
            
            for(int j=0; j<intervals.size(); j++){
                if(i==j){
                continue;
            }
                if(intervals[i][0] >= intervals[j][0]  &&  intervals[i][1] <= intervals[j][1]){
                    ans = ans - 1;
                    break;
                }
            }
        }
        return ans;
    }
};
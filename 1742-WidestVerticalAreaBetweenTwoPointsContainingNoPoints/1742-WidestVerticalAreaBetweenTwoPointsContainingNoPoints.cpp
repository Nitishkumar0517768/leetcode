// Last updated: 8/18/2026, 11:49:41 AM
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());

        int maxD = 0;

        for(int i=0; i<points.size()-1; i++){
            int diff = points[i+1][0] - points[i][0];

            maxD = max(diff, maxD); 
        }
        return maxD;
    }
};
// Last updated: 8/12/2026, 3:01:57 PM
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>temp;
        for(int i=0;i<points.size();i++){
            temp.push_back(points[i][0]);
        }
        sort(temp.begin(),temp.end());
        int max = INT_MIN;
        for(int i=0;i<temp.size()-1;i++){
            if(max<temp[i+1]-temp[i]){
                max = temp[i+1]-temp[i];
            }
        }
        return max;
    }
};
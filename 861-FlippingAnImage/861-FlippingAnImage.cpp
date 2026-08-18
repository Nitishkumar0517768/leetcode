// Last updated: 8/18/2026, 11:52:06 AM
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0; i<image.size(); i++){
            int j = 0;
            int k = image[i].size()-1;
            while(k>j){
                int temp = image[i][j];
                image[i][j] = image[i][k];
                image[i][k] = temp;
                j++;
                k--;
            }

            for(int n=0; n<image[i].size(); n++){
                if(image[i][n] == 0){
                    image[i][n] = 1;
                }
                else{
                    image[i][n] = 0;
                }
            }
        }
        return image;
    }
};
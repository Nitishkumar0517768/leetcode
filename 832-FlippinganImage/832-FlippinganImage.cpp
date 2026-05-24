// Last updated: 5/24/2026, 11:46:37 AM
1class Solution {
2public:
3    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
4        for(int i=0; i<image.size(); i++){
5            int j = 0;
6            int k = image[i].size()-1;
7            while(k>j){
8                int temp = image[i][j];
9                image[i][j] = image[i][k];
10                image[i][k] = temp;
11                j++;
12                k--;
13            }
14
15            for(int n=0; n<image[i].size(); n++){
16                if(image[i][n] == 0){
17                    image[i][n] = 1;
18                }
19                else{
20                    image[i][n] = 0;
21                }
22            }
23        }
24        return image;
25    }
26};
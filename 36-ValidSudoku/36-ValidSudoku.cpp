// Last updated: 8/20/2026, 3:30:49 PM
1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4        for(int i=0; i<board.size(); i++){
5            unordered_set<int> row;
6            unordered_set<int> col;
7            for(int j=0; j<board[i].size(); j++){
8                if(board[i][j] != '.'){
9                    if(row.count(board[i][j])){
10                        return false;
11                    }
12                    else{
13                        row.insert(board[i][j]);
14                    }
15                }
16
17                if(board[j][i] != '.'){
18                    if(col.count(board[j][i])){
19                        return false;
20                    }
21                    else{
22                        col.insert(board[j][i]);
23                    }
24                }
25            }
26        }
27
28        for(int row=0; row<9; row+=3){
29            for(int col=0; col<9; col+=3){
30                unordered_set<char> st;
31                for(int i=row; i<row+3; i++){
32                    for(int j=col; j<col+3; j++){
33                        if(board[i][j] != '.'){
34                            if(st.count(board[i][j])){
35                                return false;
36                            }
37                            else{
38                                st.insert(board[i][j]);
39                            }
40                        }
41                    }
42                }
43            }
44        }        
45        return true;
46    }
47};
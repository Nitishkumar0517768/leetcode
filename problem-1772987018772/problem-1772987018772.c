// Last updated: 3/8/2026, 9:53:38 PM
1int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
2    int max = 0;
3    int sum = 0;
4
5    for(int i=0; i<accountsSize; i++){
6        sum = 0;
7
8        for(int j=0; j<accountsColSize[i]; j++){
9            sum += accounts[i][j];
10        }
11
12        if(sum > max){
13            max = sum;
14        }
15
16    }
17    return max;
18}
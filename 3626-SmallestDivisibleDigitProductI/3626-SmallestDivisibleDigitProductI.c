// Last updated: 3/7/2026, 10:01:48 PM
int smallestNumber(int n, int t) {
    int pro = 1;

    for(int i=n; ; i++){
        pro = 1;
        for(int j=i; j!=0; j=j/10){
            pro *= j%10;
        }
        if(pro % t == 0){
            return i;
        }
    }
}
// Last updated: 3/7/2026, 10:01:50 PM
int mirrorDistance(int n) {
    int m = 0;

    int i=n;
    while(i!=0){
        m = m*10 + i%10;
        i=i/10;
    }
    int num = n - m;
    if(num < 0){
        num = -num;
    }
    return num;
}
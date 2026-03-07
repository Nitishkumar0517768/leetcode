// Last updated: 3/7/2026, 10:01:52 PM
int findClosest(int x, int y, int z) {
    int n = z-x;
    int m = z-y;

    if(n < 0){
        n = -n;
    }
    if(m < 0){
        m = -m;
    }
    if(n>m){
        return 2;
    }
    else if(m>n){
        return 1;
    }
    return 0;
}
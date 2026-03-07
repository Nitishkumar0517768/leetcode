// Last updated: 3/7/2026, 10:02:39 PM
bool isPowerOfFour(int n) {
    long long int m = n;
    long long int x = 4;
    long long int i;

    if(m == 1) return true;

    if(m == 4) return true;

    for(i=0; i<m/2; i++){
        x = x*4;

        if(x == m) return true;

        if(x > m){
            break;
        }
    }
    return false;
}
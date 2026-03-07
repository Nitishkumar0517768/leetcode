// Last updated: 3/7/2026, 10:02:40 PM
bool isPowerOfThree(int n) {
    long long int m = n;
    long long int x = 3;
    long long int i;

    if(m == 1) return true;

    if(m == 3) return true;

    for(i=0; i<m/2; i++){
        x = x*3;

        if(x == m) return true;

        if(x > m){
            break;
        }
    }
    return false;
}
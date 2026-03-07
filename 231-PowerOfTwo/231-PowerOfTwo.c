// Last updated: 3/7/2026, 10:02:44 PM
bool isPowerOfTwo(int n) {
    long long int m = n;
    long long int x = 2;
    long long int i;

    if(n==1) return true;
    if(n==2) return true;

    for(i=0; i<m/2; i++){
        x = x * 2;
        if(x == m){
            return true;
        }

        if(x > m){
            break;
        }
    }
    return false;
}
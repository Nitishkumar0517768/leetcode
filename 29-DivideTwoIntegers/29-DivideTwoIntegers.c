// Last updated: 3/7/2026, 10:02:57 PM
#include <limits.h>
int divide(int dividend, int divisor) {
    
    long long int m = dividend;
    long long int n = divisor;
    int divid = 0;
    int divis = 0;
    long long int count = 0;

    if(divisor == 0) return INT_MAX;
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;

    if(n == 1) return m;
    if(n == -1) return -m;
 

    if(m<0){
        m = -m;
        divid = 1;
    }
    if(n<0){
        n = -n;
        divis = 1;
    }

    for(long long int i=n; i<=m; i+=n ){
        count ++;
    }
    if(divid == 1 && divis == 1){
        count = count;
    }
    else if(divid == 1 || divis == 1){
            count = -count;
    }
    if (count > INT_MAX) return INT_MAX;
    if (count < INT_MIN) return INT_MIN;
    return (int)count;

}
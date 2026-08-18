// Last updated: 8/18/2026, 11:54:59 AM
class Solution {
public:
    double myPow(double x, int n) {
       long long m = n;
    double a = 1;

    if(x == 1){
        return 1;
    }

    if(m<0){
        x = 1/x;
        m = -m;
    }

    while(m > 0){
    if (m % 2 == 1) {  
        a = a * x;
    }
    x = x * x;          
    m = m / 2;
    }

    return a; 
    }
};
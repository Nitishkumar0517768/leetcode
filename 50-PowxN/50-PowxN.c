// Last updated: 3/7/2026, 10:02:54 PM
double myPow(double x, int n) {
    long long int m = n;
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
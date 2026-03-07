// Last updated: 3/7/2026, 10:02:36 PM
bool isPerfectSquare(int num) {
    long long int sqrt = 1;

    if(num == 1){
        return true;
    }

    for(long int i=1; i<=num/2; i++){
        sqrt = i*i;

        if(sqrt == num){
            return true;
        }
        if(sqrt > num){
            return false;
        }
        sqrt = 0;
    }
    return false;
}
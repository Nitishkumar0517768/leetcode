// Last updated: 3/7/2026, 10:02:12 PM
int alternateDigitSum(int n) {
    int sum = 0;
    int count = 0;

    for(int i=n; i!=0; i=i/10){
        if(count % 2 == 0){
            sum += i%10;
        }
        else{
            sum -= i%10;
        }
        count ++;
    }

    if(count %2 == 0 && sum != 0){
        sum = sum * (-1);
    }
    return sum;
}
// Last updated: 3/7/2026, 10:02:16 PM
int smallestEvenMultiple(int n) {
    int i;
     for( i=1; i<=2*n; i++){
            if(i%2==0 && i%n==0){
                break;
            }
        }
                return i;
}

// Last updated: 8/13/2026, 10:37:08 AM
class Solution {
public:
    int smallestNumber(int n, int t) {

    int pro = 1;

    for(int i=n; ; i++){
        pro = 1;
        for(int j=i; j!=0; j=j/10){
            pro *= j%10;
        }
        if(pro % t == 0){
            return i;
        }
    }
    return 1;
    }
};
// Last updated: 10/12/2026, 4:59:20 PM
class Solution {
public:
    int mySqrt(int x) {
        long long low=0;
        long long high=x;
        while(low<=high){
            long long mid= low+(high-low)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid>x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low-1;
    }
};
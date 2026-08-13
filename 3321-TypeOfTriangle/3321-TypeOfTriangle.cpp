// Last updated: 8/13/2026, 10:37:54 AM
class Solution {
public:
    string triangleType(vector<int>& nums) {
    int a = nums[0];
    int b = nums[1];
    int c = nums[2];

    if(nums[0] == nums[1] && nums[1] == nums[2]){
        return "equilateral";
    }   
    
    if(a+b > c && b+c > a && a+c > b){
        if(a==b || b==c || a==c){
            return "isosceles";
        }
        else{
            return "scalene";
        }
    }
    else{
        return "none";
    }
    }
};
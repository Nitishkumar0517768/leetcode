// Last updated: 3/7/2026, 10:02:21 PM
int arraySign(int* nums, int numsSize) {
    int pro1 = 1; 
    int pro2 = 1;

    for(int i=0; i<numsSize; i++){
        if(nums[i] == 0){
            return 0;
        }
        else if(nums[i] > 0){
            pro1 = pro1 * 1;
        }
        else{
            pro2 = pro2 * -1;
        }
    }
    return pro1 * pro2;
}
// Last updated: 3/7/2026, 10:01:57 PM
#include <limits.h>
double minimumAverage(int* nums, int numsSize) {

    double max = INT_MAX;

    for(int i = 0; i < numsSize-1; i++) {
        for(int j = 0; j < numsSize-i-1; j++) {

            if(nums[j] > nums[j+1]) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }

        }
    }


    int i=0; 
    int j=numsSize-1;

    while(j>=i){
        double sum = nums[i] + nums[j];

        if(sum < max){
            max = sum;
        }
        i++;
        j--;
    }
    return max/2;
}
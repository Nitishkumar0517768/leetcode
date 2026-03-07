// Last updated: 3/7/2026, 10:02:31 PM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArrayByParity = function(nums) {
    let i=0; 
    let j=nums.length-1;
    let temp;

    while(j>=i){
        if(nums[i]%2!=0 && nums[j]%2!=0){
            j--;
            continue;
        }
        if(nums[i]%2==0 && nums[j]%2==0){
            i++;
            continue;
        }
        if(nums[i]%2 != 0 && nums[j]%2==0){
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
            continue;
        }
        i++;
    }
    return nums;
};
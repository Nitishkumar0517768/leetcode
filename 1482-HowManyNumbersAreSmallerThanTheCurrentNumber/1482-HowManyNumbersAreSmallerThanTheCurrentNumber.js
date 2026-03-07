// Last updated: 3/7/2026, 10:02:26 PM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var smallerNumbersThanCurrent = function(nums) {
    let arr = [];
    let count = 0;

    for(let i=0; i<nums.length; i++){
        count = 0;
        for(let j=0; j<nums.length; j++){
            if(nums[i] > nums[j]){
                count++;
            }
        }
        arr.push(count);
    }
    return arr;
};
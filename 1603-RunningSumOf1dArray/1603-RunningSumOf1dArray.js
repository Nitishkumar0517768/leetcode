// Last updated: 3/7/2026, 10:02:25 PM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function(nums) {
    let arr = [];
    let sum = 0;

    for(let i=0; i<nums.length; i++){
        sum = 0;
        for(let j=i; j>=0; j--){
            sum += nums[j];
        }
        arr.push(sum);
    }
    return arr;
};
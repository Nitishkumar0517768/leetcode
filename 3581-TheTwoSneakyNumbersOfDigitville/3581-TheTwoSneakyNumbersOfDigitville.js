// Last updated: 3/7/2026, 10:01:55 PM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getSneakyNumbers = function(nums) {
    let arr = [];
    let count = 0;

    for(let i=0; i<nums.length; i++){
        count = 0;
        for(let j=i; j<nums.length; j++){
            if(nums[i] == nums[j]){
                count ++
            }
        }
        if(count == 2){
            arr.push(nums[i])
        }
        if(arr.length == 2){
            return arr;
            break;
        }
    }
    return arr;
};
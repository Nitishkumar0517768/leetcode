// Last updated: 3/7/2026, 10:02:17 PM
/**
 * @param {number[]} nums
 * @return {number}
 */
var mostFrequentEven = function (nums) {
    let obj = {};
    let count = 0;
    let res = -1;

    for (let i = 0; i < nums.length; i++) {
        if (nums[i] % 2 == 0) {
            if (obj[nums[i]] === undefined) {
                obj[nums[i]] = 1;
            }
            else {
                obj[nums[i]]++;
            }
        }
    }
    console.log(obj)

    for(let key in obj){
        if(obj[key] > count){
            count = obj[key];
            res = Number(key);
        }
    }
    return res;
};
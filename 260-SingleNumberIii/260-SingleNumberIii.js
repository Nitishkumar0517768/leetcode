// Last updated: 3/7/2026, 10:02:43 PM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var singleNumber = function(nums) {
   let obj = {};
for(let i=0; i<nums.length; i++){
    if(obj[nums[i]]=== undefined){
        obj[nums[i]] =1;
    }
    else{
   obj[nums[i]] ++;
    }
}
let arr =[]
for(let key in obj){
    if(obj[key] === 1){
     arr.push(Number(key))
    }
}
 return arr;
};
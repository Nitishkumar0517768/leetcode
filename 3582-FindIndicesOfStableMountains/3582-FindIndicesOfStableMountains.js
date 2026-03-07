// Last updated: 3/7/2026, 10:01:53 PM
/**
 * @param {number[]} height
 * @param {number} threshold
 * @return {number[]}
 */
var stableMountains = function(height, threshold) {
    let res = [];
    for(let i=0; i<height.length; i++){
        if(height[i-1]>threshold){
            res.push(i);
        }
    }
    return res;
};
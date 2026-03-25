// Last updated: 3/25/2026, 3:17:39 PM
/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
   for(let key in obj){
    return false;
   }
    return true;
};
// Last updated: 3/7/2026, 10:02:53 PM
/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let count = 0;
    for(let i=s.length-1; i>=0; i--){
        if(s[i] !== ' '){
            count++;
        }
        if(s[i] === ' ' && count>0){
            return count;
        }
    }
    return count;
};
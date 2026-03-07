// Last updated: 3/7/2026, 10:01:59 PM
/**
 * @param {string} s
 * @return {number}
 */
var scoreOfString = function(s) {
    let num = 0;
    let sum = 0;

    for(let i=1; i<s.length; i++){
        let a = s.charCodeAt(i);
        let b = s.charCodeAt(i-1);
        num = a - b;
       
        
        if(num < 0){
            num = -num;
        }
        sum = sum + num;
    }
    return sum;
};
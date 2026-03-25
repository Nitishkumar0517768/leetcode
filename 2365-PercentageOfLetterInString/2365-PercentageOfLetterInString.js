// Last updated: 3/25/2026, 3:17:50 PM
/**
 * @param {string} s
 * @param {character} letter
 * @return {number}
 */
var percentageLetter = function(s, letter) {
    let count = 0;

    for(let i=0; i<s.length; i++){
        if(s[i] === letter){
            count++;
        }
    }
    if(count === 0){
        return 0;
    }
    return Math.floor((count/s.length)*100);
};
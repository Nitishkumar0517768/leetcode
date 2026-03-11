// Last updated: 3/11/2026, 11:43:34 AM
1/**
2 * @param {string} s
3 * @param {character} letter
4 * @return {number}
5 */
6var percentageLetter = function(s, letter) {
7    let count = 0;
8
9    for(let i=0; i<s.length; i++){
10        if(s[i] === letter){
11            count++;
12        }
13    }
14    if(count === 0){
15        return 0;
16    }
17    return Math.floor((count/s.length)*100);
18};
// Last updated: 3/7/2026, 11:04:01 PM
1/**
2 * @param {string} word
3 * @return {boolean}
4 */
5var detectCapitalUse = function(word) {
6    let ch = 0;
7    let n = 0;
8    
9    if(word[0] >= 'A' && word[0] <= 'Z'){
10        n = 1;
11    }
12
13    for(let i=0; i<word.length; i++){
14        if(word[i] >= 'A' && word[i] <= 'Z'){
15            ch++;
16        }
17    }
18
19    if(ch === word.length || ch===0 || (ch==1 && n===1)){
20        return true;
21    }
22    return false;
23};
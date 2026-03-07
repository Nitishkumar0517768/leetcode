// Last updated: 3/7/2026, 10:02:37 PM
/**
 * @param {string} s
 * @return {string}
 */
var reverseVowels = function(s) {
     s = s.split('');
    let arr = [];
    let n; 

    for(let i=0; i<s.length; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            arr.push(s[i]);
            
        }
    }

    n = arr.length;

    for(let j=0; j<s.length; j++){
        if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U'){
            s[j] = arr[n-1];
            n--;
        }
    }
    s = s.join("")
    return s;
};
// Last updated: 3/7/2026, 10:02:35 PM
/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function(n) {
    let answer = [];
    for(let i=0; i<n; i++){
        let num = i+1;
        answer[i] = `${num}`;
        if(num%3 == 0){
            answer[i] = "Fizz";
        }
        if(num%5 == 0){
            answer[i] = "Buzz";
        }
        if(num%3 == 0 && num%5 == 0){
            answer[i] = "FizzBuzz";
        }
    }
    return answer;
};
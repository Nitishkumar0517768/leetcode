// Last updated: 8/18/2026, 11:52:29 AM
var selfDividingNumbers = function(left, right) {
    let arr = [];

    for(let i = left; i <= right; i++){
        let num = i;
        let valid = true;

        while(num > 0){
            let digit = num % 10;

            if(digit === 0 || i % digit !== 0){
                valid = false;
                break;
            }

            num = Math.floor(num / 10);
        }

        if(valid){
            arr.push(i);
        }
    }

    return arr;
};
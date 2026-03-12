// Last updated: 3/12/2026, 5:12:07 PM
1var selfDividingNumbers = function(left, right) {
2    let arr = [];
3
4    for(let i = left; i <= right; i++){
5        let num = i;
6        let valid = true;
7
8        while(num > 0){
9            let digit = num % 10;
10
11            if(digit === 0 || i % digit !== 0){
12                valid = false;
13                break;
14            }
15
16            num = Math.floor(num / 10);
17        }
18
19        if(valid){
20            arr.push(i);
21        }
22    }
23
24    return arr;
25};
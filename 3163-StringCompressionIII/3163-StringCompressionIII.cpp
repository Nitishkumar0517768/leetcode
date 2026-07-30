// Last updated: 7/30/2026, 3:27:10 PM
1class Solution {
2public:
3    string compressedString(string word) {
4        string s;
5        int count = 1;
6
7        for(int i=0; i<word.size()-1; i++){
8            if(word[i] != word[i+1]){
9                while(count > 9){
10                    count = count - 9;
11                    s += "9";
12                    s += word[i];
13                }
14                s += to_string(count);
15                s += word[i];
16                count = 1;
17            }
18            else{
19                count++;
20            }
21        }
22        
23        while(count > 9){
24            count = count-9;
25            s += "9";
26            s += word.back();
27        }
28        s += to_string(count);
29        s += word.back();
30        
31        return s;
32    }
33};
// Last updated: 5/12/2026, 9:33:12 PM
1class Solution {
2public:
3    string defangIPaddr(string address) {
4        for(int i=0; i<address.size(); i++){
5            if(address[i] == '.'){
6                address.replace(i, 1, "[.]");
7                i += 2;
8            }
9        }
10        return address;
11    }
12};
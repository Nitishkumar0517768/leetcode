// Last updated: 8/18/2026, 11:51:19 AM
class Solution {
public:
    string defangIPaddr(string address) {
        for(int i=0; i<address.size(); i++){
            if(address[i] == '.'){
                address.replace(i, 1, "[.]");
                i += 2;
            }
        }
        return address;
    }
};
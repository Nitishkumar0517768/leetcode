// Last updated: 8/18/2026, 11:45:57 AM
class Solution {
public:

    string convertToBinary(int num){
        string binary = "";

        while(num > 0){
            binary = char((num%2) + '0') + binary;
            num = num/2;
        }
        return binary;
    }

    string convertDateToBinary(string date) {
        string ans = "";
        string temp = "";

        for(int i=0; i<date.size(); i++){
            if(date[i] == '-'){
                int num = stoi(temp);
                
                ans += convertToBinary(num);
                ans += "-";
                temp = "";
            }
            else{
                temp += date[i];
            }
        }

        int num = stoi(temp);
        ans += convertToBinary(num);
        return ans;
    }
};
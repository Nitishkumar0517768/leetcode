// Last updated: 8/18/2026, 11:50:37 AM
class Solution {
public:
    int maximum69Number (int num) {
        vector<int> arr;
        int res = 0;
        
        int i=num;
        while(i>0){
            int digit = i%10;
            arr.push_back(digit);
            i /= 10;
        }
        reverse(arr.begin(), arr.end());

        for(int j=0; j<arr.size(); j++){
            if(arr[j] == 6){
                arr[j] = 9;
                break;
            }
            
        }

        for(int digit : arr){
            res = res*10 + digit;
        }
        return res;

    }
};
// Last updated: 8/18/2026, 11:47:36 AM
class Solution {
public:
    bool digitCount(string num) {
        
        for(int i=0; i<num.size(); i++){
            int count = 0;
            for(int j=0; j<num.size(); j++){
                if( i == num[j] - '0'){
                    count++;
                }
            }
            // cout << i << "->" << count << endl;
            if(count != num[i] - '0'){
                return false;
            }
        }
        return true;
    }
};
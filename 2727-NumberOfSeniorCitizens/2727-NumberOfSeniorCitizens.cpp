// Last updated: 8/13/2026, 10:38:46 AM
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;

        for(int i=0; i<details.size(); i++){
            int year = (details[i][11] - '0')*10 + (details[i][12] - '0');
            cout << year << endl;
            if(year > 60) count++; 
        }
        return count;
    }
};
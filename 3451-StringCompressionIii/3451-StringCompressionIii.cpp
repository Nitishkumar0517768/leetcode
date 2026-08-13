// Last updated: 8/13/2026, 10:37:34 AM
class Solution {
public:
    string compressedString(string word) {
        string s;
        int count = 1;

        for(int i=0; i<word.size()-1; i++){
            if(word[i] != word[i+1]){
                while(count > 9){
                    count = count - 9;
                    s += "9";
                    s += word[i];
                }
                s += to_string(count);
                s += word[i];
                count = 1;
            }
            else{
                count++;
            }
        }
        
        while(count > 9){
            count = count-9;
            s += "9";
            s += word.back();
        }
        s += to_string(count);
        s += word.back();
        
        return s;
    }
};
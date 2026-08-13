// Last updated: 8/13/2026, 10:37:13 AM
class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";
        if(k == 1){
            return s[0];
        }

        while(true){
            int n = s.size();

            for(int i=0; i<n; i++){
                char m;
                if(s[i] == 'z'){
                    m = 'a'; 
                }
                else{
                    m = s[i] + 1;
                }
                s += m;
            }

            if(s.size() >= k){
                return s[k-1];
            }
        }
        return 'a';
    }
};
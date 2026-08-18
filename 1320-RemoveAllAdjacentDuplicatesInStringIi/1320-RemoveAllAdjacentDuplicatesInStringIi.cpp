// Last updated: 8/18/2026, 11:51:04 AM
class Solution {
public:
    string removeDuplicates(string s, int k) {
        string res = "";

        for(char ch : s){
            res.push_back(ch);
            if(res.size() >= k){
                    int count = 1;
                for(int i=res.size()-k+1; i<res.size(); i++){
                    if(res[i] != res[i-1]){
                        break;
                    }
                    count++;

                    if(count == k){
                        res.erase(res.end()-k, res.end());
                    }
                }
            }
            
        }
        return res;
    }
};
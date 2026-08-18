// Last updated: 8/18/2026, 11:55:13 AM
class Solution {
public:
    int strStr(string haystack, string needle) {
        int k = needle.size();
        int n = haystack.size();

        for(int i=0; i<=n-k; i++){
            int j = 0;
            for(j=0; j<k; j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
            }
            if(j == k){
                return i;
            }
        }
        return -1;
    }
};
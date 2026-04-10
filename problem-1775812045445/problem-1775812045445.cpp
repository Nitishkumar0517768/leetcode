// Last updated: 4/10/2026, 2:37:25 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26]={0};
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            
           arr[s[i]-'a']= arr[s[i]-'a']+1;
           arr[t[i]-'a']= arr[t[i]-'a']-1;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=0)return false;
        }
        return true;
    }
};
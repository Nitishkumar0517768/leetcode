// Last updated: 8/18/2026, 11:53:17 AM
// class Solution {
// public:
//     int maxProduct(vector<string>& words) {
//         int n = words.size();
//         int maxP = 0;

//         for(int i=0; i<n-1; i++){

//             unordered_set<char> st(words[i].begin(), words[i].end());
//             int s1 = words[i].size();
//             int s2 = 0;
//             int pro;

//             for(int j=i+1; j<n; j++){
//                 int count = 0;
//                 for(int k=0; k<words[j].size(); k++){
//                     if(st.find(words[j][k]) != st.end()){
//                         count = 1;
//                         break;
//                     }
//                 }
//                 if(count == 0){
//                     s2 = words[j].size();
//                 }
//                 pro = s1*s2;

//                 maxP = max(maxP, pro);
//             }

//         }
//         return maxP;
//     }
// };



class Solution {
public:
    bool check(string str1 , string str2){
        vector<bool> freq(26 , false);
        for(char ch : str1){
            freq[ch-'a'] = true;
        }
        for(char ch : str2){
            if(freq[ch-'a']){
                return false;
            }
        }
        return true;
    } 
    int maxProduct(vector<string>& words) {
        int maxi = 0;
        for(int i =0; i<words.size() -1 ; i++){
            for(int j = i+1 ; j<words.size() ; j++){
                int pro = words[i].size() * words[j].size();
                if(pro <= maxi){
                    continue;
                }
                else if(check(words[i] , words[j])){
                    maxi = max(maxi , pro);
                }
            }
        }
        return maxi;
    }
};
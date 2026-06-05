// Last updated: 6/5/2026, 2:13:31 PM
1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        vector<int> st;
5
6        for(string token : tokens) {
7            if(token == "+" || token == "-" || token == "*" || token == "/") {
8
9                int b = st.back();
10                st.pop_back();
11
12                int a = st.back();
13                st.pop_back();
14
15                if(token == "+") st.push_back(a + b);
16                else if(token == "-") st.push_back(a - b);
17                else if(token == "*") st.push_back(a * b);
18                else st.push_back(a / b);
19            }
20            else {
21                st.push_back(stoi(token));
22            }
23        }
24
25        return st.back();
26    }
27};
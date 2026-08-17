// Last updated: 8/17/2026, 3:43:36 PM
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* prev;
7    Node* next;
8    Node* child;
9};
10*/
11
12class Solution {
13
14public:
15    Node* flatten(Node* head) {
16        Node* temp = head;
17        Node* tempS = head;
18        stack <Node*> st;
19
20        while(temp != nullptr){
21            if(temp -> child != nullptr) {
22                if(temp->next != nullptr)st.push(temp->next);
23                temp -> next = temp->child;
24                temp -> child = nullptr;
25                temp -> next -> prev = temp;
26            }
27            tempS = temp;
28            temp = temp -> next;
29        }
30        while(!st.empty()){
31            temp = st.top();
32            st.pop();
33            tempS -> next = temp;
34            temp-> prev = tempS;
35            while(tempS->next != nullptr) tempS = tempS -> next; 
36        }
37        return head;
38    }
39};
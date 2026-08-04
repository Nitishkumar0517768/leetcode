// Last updated: 8/4/2026, 5:22:58 PM
1class MyLinkedList {
2public:
3    ListNode* head;
4
5    MyLinkedList() {
6        head = NULL;
7    }
8    
9    int get(int index) {
10        if(index<0){
11            return -1;
12        }
13        ListNode* temp = head;
14        while(temp!=nullptr && index--){
15            temp=temp->next;
16        }
17        if(temp==nullptr) return -1;
18        return temp->val;
19    }
20    
21    void addAtHead(int val) {
22        ListNode* newNode = new ListNode(val);
23        newNode->next=head;
24        head=newNode;         
25    }
26    
27    void addAtTail(int val) {
28        if(head==nullptr){
29            head=new ListNode(val);
30            return;
31        }
32        ListNode *temp = head; 
33        while(temp->next!=NULL){
34            temp=temp->next;
35        }
36        temp->next=new ListNode(val);
37
38    }
39    
40    void addAtIndex(int index, int val) {
41        ListNode *temp = head;
42        int count=0;
43        if(index==0){
44            addAtHead(val);
45            return;
46        }
47        if(temp == NULL) return;
48        while(temp->next!=NULL && count<index-1){
49            temp=temp->next;
50            count++;
51        }
52        
53        ListNode* newNode = new ListNode(val);
54        newNode->next=temp->next;
55        temp->next=newNode;
56    }
57    
58    void deleteAtIndex(int index) {
59        ListNode* temp = head;
60        if(head==NULL){
61            return;
62        }
63        if(index==0){
64            head=head->next;
65            return;
66        }
67        int count=0;
68        while(temp->next!=NULL && count<index-1){
69            temp=temp->next;
70            count++;
71        }
72        if(count!=index-1){
73            return;
74        }
75        if(temp==NULL || temp->next==NULL) return;
76        ListNode* del = temp->next;
77        temp->next=temp->next->next;
78        delete del;
79    }
80};
81
82/**
83 * Your MyLinkedList object will be instantiated and called as such:
84 * MyLinkedList* obj = new MyLinkedList();
85 * int param_1 = obj->get(index);
86 * obj->addAtHead(val);
87 * obj->addAtTail(val);
88 * obj->addAtIndex(index,val);
89 * obj->deleteAtIndex(index);
90 */
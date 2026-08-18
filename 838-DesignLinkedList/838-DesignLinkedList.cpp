// Last updated: 8/18/2026, 11:52:09 AM
class MyLinkedList {
public:
    ListNode* head;

    MyLinkedList() {
        head = NULL;
    }
    
    int get(int index) {
        if(index<0){
            return -1;
        }
        ListNode* temp = head;
        while(temp!=nullptr && index--){
            temp=temp->next;
        }
        if(temp==nullptr) return -1;
        return temp->val;
    }
    
    void addAtHead(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next=head;
        head=newNode;         
    }
    
    void addAtTail(int val) {
        if(head==nullptr){
            head=new ListNode(val);
            return;
        }
        ListNode *temp = head; 
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new ListNode(val);

    }
    
    void addAtIndex(int index, int val) {
        ListNode *temp = head;
        int count=0;
        if(index==0){
            addAtHead(val);
            return;
        }
        if(temp == NULL) return;
        while(temp->next!=NULL && count<index-1){
            temp=temp->next;
            count++;
        }
        
        ListNode* newNode = new ListNode(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }
    
    void deleteAtIndex(int index) {
        ListNode* temp = head;
        if(head==NULL){
            return;
        }
        if(index==0){
            head=head->next;
            return;
        }
        int count=0;
        while(temp->next!=NULL && count<index-1){
            temp=temp->next;
            count++;
        }
        if(count!=index-1){
            return;
        }
        if(temp==NULL || temp->next==NULL) return;
        ListNode* del = temp->next;
        temp->next=temp->next->next;
        delete del;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
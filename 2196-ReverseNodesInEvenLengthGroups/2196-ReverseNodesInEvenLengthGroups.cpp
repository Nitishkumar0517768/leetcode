// Last updated: 8/25/2026, 11:43:19 AM
class Solution {
public:
    ListNode* reverseEvenLengthGroups(ListNode* head) {

        if(head == nullptr || head->next == nullptr){
            return head;
        }

        ListNode* curr = head;
        ListNode* prev = nullptr;
        int count = 0;

        while(curr != nullptr){

            count++;

            // Actual group size check
            int actualCount = 0;
            ListNode* check = curr;

            for(int i = 0; i < count && check != nullptr; i++){
                actualCount++;
                check = check->next;
            }

            ListNode* prv = nullptr;
            ListNode* temp = curr;

            // actualCount even hai to reverse
            if(actualCount % 2 == 0){

                for(int i = 0; i < actualCount && curr != nullptr; i++){

                    ListNode* nxtNode = curr->next;

                    curr->next = prv;

                    prv = curr;

                    curr = nxtNode;
                }

                // previous group ko reversed group se connect
                if(prev != nullptr){
                    prev->next = prv;
                }

                // old first node ab last node hai
                temp->next = curr;

                prev = temp;
            }

            // odd group
            else{

                for(int i = 0; i < actualCount && curr != nullptr; i++){

                    prev = curr;
                    curr = curr->next;
                }
            }
        }

        return head;
    }
};
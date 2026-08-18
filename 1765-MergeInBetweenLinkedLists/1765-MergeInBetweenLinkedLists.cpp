// Last updated: 8/18/2026, 11:49:35 AM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* curr = list1;
        ListNode* temp = nullptr;
        int count = 0;

        while(curr != nullptr){

            if(count == b){
                temp = curr->next;
            }
            curr = curr->next;
            count++;
        }

        curr = list1;
        count = 0;

        while(curr != nullptr){

            if(count == a-1){
                curr->next = list2;
                break;
            }
            curr = curr->next;
            count++;
        }
        
        while(list2->next != nullptr){
            list2 = list2->next;
        }

        list2->next = temp;

        return list1;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;
        ListNode *head, *tail, *p1, *p2;
        if(l1->val < l2->val){
            head = l1;
            p1 = l1->next;
            p2 = l2;
        }else{
            head = l2;
            p1 = l1;
            p2 = l2->next;
        }
        tail = head;

        while(p1 && p2){
            if(p1->val <= p2->val){
                tail->next = p1;
                tail = p1;
                p1 = p1->next; 
            }else{
                tail->next = p2;
                tail = p2;
                p2 = p2->next;
            }
        }
        if(p1){
            tail->next = p1;
        }else{
            tail->next = p2;
        }

        return head;

    }
};

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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return head;

        ListNode *p = head->next;
        head->next = nullptr;
        while(p!=nullptr){
            ListNode *q = p->next;
            p->next = head;
            head = p;
            p = q;
        }
        return head;
    }
};

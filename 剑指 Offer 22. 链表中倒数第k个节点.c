/**
   方法一： 单指针
   先遍历链表中元素的个数
   然后正数n-k个就是倒数第k个 
**/

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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode* cur = head;
        int num = 0;
        while(cur != nullptr){
            num++;
            cur = cur->next;
        }
        cur = head;
        for(int i=0; i<num-k; i++){
            cur = cur->next;
        }
        return cur;
    }
};


/**
   方法二： 快慢指针
   快指针先移动K个 这样快慢指针之间就相隔k个元素
   当快指针移动到链表最后一个元素时，慢指针就移动到了倒数第k个
**/

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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && k>0){
            fast = fast->next;
            k--;
        }
        while(fast){
            fast = fast->next;
            slow = slow->next;
        }
        return slow;

    }
};

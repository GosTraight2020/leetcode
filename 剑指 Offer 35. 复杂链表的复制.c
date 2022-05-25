/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
private:
    unordered_map<Node*, Node*> map;
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL)return NULL;

        if(!map.count(head)){
            Node *newHead = new Node(head->val);
            map[head] = newHead;
            newHead->next = copyRandomList(head->next);
            newHead->random = copyRandomList(head->random);
        }
        return map[head];
        
    }
};


//###################################################################
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
private:
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL)return NULL;
        
        for(Node * node = head; node!=NULL; node = node->next->next){
            Node *new_ = new Node(node->val);
            new_->next = node->next;
            node->next = new_;
        }

        for(Node *node = head; node!=NULL; node=node->next->next){
            Node *nxt = node->next;
            nxt->random = (node->random!=NULL)?node->random->next:NULL;
        }

        Node * newHead = head->next;
        for(Node *node = head; node!=NULL; node=node->next){
            Node *nxt = node->next;
            node->next = nxt->next;
            nxt->next = (node->next==NULL)?NULL:node->next->next;
        }
        return newHead;


        
    }
};

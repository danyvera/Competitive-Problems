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
    ListNode* removeElements(ListNode* head, int val)  {
        if( ( head == NULL) || ( head->next == NULL && head->val == val) )
            return NULL;
        
        ListNode * l = head;
        
        while( l != NULL){
            if( l->val == val){
                head = l->next;
                l = head;
            }
            else{
                ListNode* p = l;    
                if( l->next!=NULL && l->next->val == val) {
                    p->next = l->next->next;
                    l = p;
                }
                else{
                    l = l->next;
                }
            }
        }
        return head;
    }
};

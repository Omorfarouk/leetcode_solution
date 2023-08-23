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
    ListNode* deleteDuplicates(ListNode* head) {
       if(head==NULL || head->next==NULL) return head;
      ListNode *prev=head;
        ListNode *curr=prev->next;
        ListNode *nxt=curr->next;
        while(curr!=NULL){
            if(prev->val==curr->val){
                prev->next=nxt;
                curr->next=NULL;
                delete(curr);
                curr=nxt;
                if(nxt!=NULL){
                    nxt=curr->next;
                }
            }
                else{
                    prev=curr;
                    curr=nxt;
                    if(nxt!=NULL){
                        nxt=nxt->next;
                    }
                }
        }
        
        return head;
    }
};


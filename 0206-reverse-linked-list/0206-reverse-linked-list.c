/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
  struct ListNode *p, *c, *n;
    p=NULL;
    c=n=head;
    while(n!=0){
        n=n->next;
        c->next=p;
        p=c;
        c=n;
        
    }
    head=p;
    return head;
}
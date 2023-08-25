/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


// time O(n) space O(1)
/*
class Solution {
    int length(ListNode *head){
            int len=0;
        while(head){
            head=head->next;
            len++;
        }
        return len;
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      int lenA=length(headA);
        int lenB=length(headB);
        
      if(lenA>lenB){
          while(lenA>lenB){
              headA=headA->next;
              lenA--;
          }
      }
        else{
            while(lenB>lenA){
                headB=headB->next;
                lenB--;
            }
        }
        
        while(headA && headB){
            if(headA==headB) return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};
*/


//time O(n) space O(n)
class Solution {
    public:
      ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       unordered_set<ListNode*>s;
          while(headA){
              s.insert(headA);
              headA=headA->next;
          }
          while(headB){
              if(s.find(headB)!=s.end()) return headB;
              headB=headB->next;
          }
          return NULL;    
      }
};

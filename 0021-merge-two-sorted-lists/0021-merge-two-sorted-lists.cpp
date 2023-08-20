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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode *head;
   if(list1==0) return list2;
   else if(list2==0) return list1;
 
         if (list1 -> val <= list2 -> val) {
            head=list1;
            list1=list1->next;
        }
        else {
            head=list2;
            list2=list2->next;
        }
        ListNode *curr=head;
        
        while(list1!=NULL && list2!=NULL){
            if(list1->val <= list2->val){
                curr->next=list1;
                list1=list1->next;
            }
            else {
                curr->next=list2;
                list2=list2->next;
            }
            curr=curr->next;
        }
         if(list1 != NULL) curr->next = list1;
        if(list2 != NULL) curr->next = list2;
            
        return head;
    }
};

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         //checking for NULL inputs
//         if (list1 == NULL) {
//             return list2;
//         } else if (list2 == NULL) {
//             return list1;
//         }
//         //initializing the head pointer to be returned
//         //compares the very first values of the input for the head
//         ListNode* head;
//         if (list1 -> val <= list2 -> val) {
//             head = list1;
//             list1 = list1 -> next;
//         } else {
//             head = list2;
//             list2 = list2 -> next;
//         }
//         //use of curr pointer to go through the list
//         //the loop runs until one of the listnodes becomes NULL
//         ListNode* curr = head;
//         while (list1 != NULL && list2 != NULL) {
//             if (list1 -> val <= list2 -> val) {
//                 curr -> next = list1;
//                 list1 = list1 -> next;
//                 curr = curr -> next;
//             } else {
//                 curr -> next = list2;
//                 list2 = list2 -> next;
//                 curr = curr -> next;
//             }
//         }
//         //connecting the rest of the list if there are any
//         if (list1 != NULL) {
//             curr -> next = list1;
//         }
//         if (list2 != NULL) {
//             curr -> next = list2;
//         }
//         return head;
//     }
// };

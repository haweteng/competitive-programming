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
    ListNode* deleteDuplicates(ListNode* head) 
    {
       ListNode *ptr1=head,*ptr2=nullptr,*ptr3=nullptr;
           while(ptr1)
           {
               ptr3=ptr1->next;
               while(ptr1->next&&ptr1->val==ptr1->next->val)
               ptr1->next=ptr1->next->next;
               if(ptr3!=ptr1->next)
               {
                   if(ptr2)ptr2->next=ptr1->next;
                   else head=ptr1->next;
               }
               else
               ptr2=ptr1;
               ptr1=ptr1->next;
           }
           return head;   
    }
};

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=1;
ListNode *cur;
ListNode *prev;
cur=head;
while(cur->next!=NULL)
 {
cur=cur->next;
     count++;
 }
 if(count==n)
 {
     head=head->next;
     return head;

 
 }
 int k=count-n;
 
 prev=NULL;
 cur=head;
 while(k>0)
 {
     
     prev=cur;
     cur=cur->next;
     k--;
     
 }
 prev->next=cur->next;
 return head;
}
};

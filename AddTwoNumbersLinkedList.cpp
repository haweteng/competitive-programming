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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* solution = new ListNode(0); 
        ListNode* node = solution;
        bool carry = false;
        
        while (l1 != NULL || l2 !=NULL || carry == true)
        {
            int sum = 0;
            if(l1 != NULL)
            {
                sum += l1->val;
                l1 = l1->next; 
            }
            if(l2 !=NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            
            sum+= carry;
            if(sum >= 10)
            {
                carry = true;
                sum = (sum)%10;
            }
            else
            {
                carry = false; 
            }
            
            
            node->next = new ListNode(sum);
            node = node->next;

            
            
        }
        
        return solution->next;
    }
};

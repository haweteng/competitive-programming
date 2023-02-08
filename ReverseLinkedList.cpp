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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)	
        return head;
		ListNode *ptr1 = head->next;
		head->next = nullptr;
		ListNode *ptr2 = nullptr;
		while (ptr1){
			ptr2 = ptr1->next;
			ptr1->next = head;
			head = ptr1;
			ptr1 = ptr2;
		}
		return head;
    }
};

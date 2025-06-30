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
        ListNode* node = new ListNode();
        ListNode* current = node;
        int rem = 0;
        while(l1 != NULL || l2 != NULL || rem){
            int sum = rem;
            if(l1 != NULL){
                sum+=l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum+=l2->val;
                l2 = l2->next;
            }
            rem = sum/10;
            current->next = new ListNode(sum%10);
            current = current->next;
        }
        return node->next;
    }
};
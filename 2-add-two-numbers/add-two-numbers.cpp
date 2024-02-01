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
        ListNode* head = new ListNode(), *temp = head;
        int carry = 0;
        while(l1 and l2){
            int sum = carry + l1->val + l2->val;
            carry = sum/10;
            sum %= 10;
            ListNode *curr = new ListNode(sum);
            temp->next = curr;
            temp = curr;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1){
            int sum = carry + l1->val;
            carry = sum/10;
            sum %= 10;
            ListNode * curr = new ListNode(sum);
            temp->next = curr;
            temp = curr;
            l1 = l1->next;
        }
        while(l2){
            int sum = carry + l2->val;
            carry = sum/10;
            sum %= 10;
            ListNode * curr = new ListNode(sum);
            temp->next = curr;
            temp = curr;
            l2 = l2->next;
        }
        if(carry != 0){
            ListNode *curr = new ListNode(carry);
            temp->next = curr;
        }
        return head->next;
    }
};
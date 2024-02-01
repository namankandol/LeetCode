class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(), *temp = head;
        int carry = 0;
        while(l1 || l2){
            int x = (l1!=NULL) ? l1->val : 0;
            int y = (l2!=NULL) ? l2->val : 0;
            int sum = x + y + carry;
            carry = sum/10;
            sum %= 10;
            ListNode *curr = new ListNode(sum);
            temp->next = curr;
            temp = curr;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        if(carry != 0){
            ListNode *curr = new ListNode(carry);
            temp->next = curr;
        }
        return head->next;
    }
};
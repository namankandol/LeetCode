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
        int size = 0;
        ListNode *temp = head;
        while(temp) {
            size++;;
            temp = temp->next;
        }
        int move = size-n;
        temp = head;
        if(move == 0) head = head->next;
        else{
            while(--move) temp = temp->next;
            temp->next = temp->next->next;
        }

        return head;
    }
};
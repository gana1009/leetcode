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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k==0)
        {
            return head;
        }
        ListNode *temp=head;
        int n=0;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
            n++;
        }
        temp -> next = head;
        k = k % (n+1);
        int m = n-k;
        temp = head;
        while(m)
        {
            temp = temp -> next;
            m--;
        }
        ListNode *newHead = temp -> next;
        temp -> next =NULL;
        return newHead;
    }
};
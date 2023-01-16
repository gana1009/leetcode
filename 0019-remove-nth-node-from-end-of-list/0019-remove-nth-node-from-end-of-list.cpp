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
        ListNode *temp = head;
        ListNode *temp1=head;

        for(int i=0; i<n ; i++)
        {
            temp1 = temp1 -> next;
        }
        if(temp1 == NULL)
        {
            temp = temp -> next;
            delete head;
            return temp;
        }
        while(temp1 -> next != NULL)
        {
            temp = temp -> next;
            temp1=temp1-> next;
        }
        ListNode *slow = temp -> next;
        temp -> next =temp -> next -> next;
        delete slow;
         return head;
    }
};
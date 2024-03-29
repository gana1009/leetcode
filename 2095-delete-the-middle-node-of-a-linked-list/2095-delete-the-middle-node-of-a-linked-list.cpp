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
    ListNode* deleteMiddle(ListNode* head) {
        if(head -> next == NULL) return NULL;
        int n=0;
       ListNode *temp =head;
       while(temp -> next != NULL)
       {
           n++;
           temp =temp -> next;
       } 
       ListNode *temp1 = head;
       for(int i=0;i < ((n+1)/2)-1;i++)
       {
           temp1 = temp1 -> next;
       }
       temp1 -> next =temp1 -> next -> next;
       return head;
    }
};
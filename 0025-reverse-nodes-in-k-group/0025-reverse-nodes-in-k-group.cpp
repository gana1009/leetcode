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
    int getLength(ListNode *head)
    {
        int len =0;
        while(head!= NULL)
        {
            head = head -> next;
            len ++;
        }
        return len;
    }
    ListNode *reverseList(ListNode* head, int k, int length)
    {
         if (length < k) 
             return head;
        
          ListNode* prevptr = NULL;
          ListNode* currptr = head;
          ListNode* nextptr;

          int count =0;
          while(currptr != NULL && count < k)
          {
            nextptr = currptr -> next;
            currptr -> next = prevptr;
            prevptr = currptr;
            currptr = nextptr;
            count ++;
          }

          if(nextptr != NULL)
          {
            head -> next = reverseList(nextptr,k,length-k);
          }

          return prevptr;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
       int length = getLength(head);
    
        return reverseList(head,k,length);
    }
};
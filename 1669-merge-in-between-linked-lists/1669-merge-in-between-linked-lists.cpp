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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* temp1 = list1;
        for(int i =1 ;i < a; i++)
        {
            temp1 = temp1 -> next;
        }
        ListNode* temp2 = list1;
        for(int i =1 ;i <=b; i++)
        {
            temp2 = temp2 -> next;
        }
        
        temp1-> next = list2;
        while(temp1->next)
        {
            temp1 = temp1 -> next;
        }
        temp1 -> next = temp2 -> next;
        return list1;
    }
};
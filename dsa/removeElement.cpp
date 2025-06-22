/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]
 

Constraints:

The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz
*/



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
        ListNode* temp = head ;
        ListNode* prev = head ;
        int count = 0 ;
        for (ListNode* i = head ; i != nullptr ; i = i->next){
            count ++;
        }
       
        
        int i = 0 ;
        // head and single node deletion 
        if (i == count-n){
            head = head->next;
        }
        //other cases
        while(i < (count-n)){
            prev = temp;
            temp = temp->next ;
            i++;
        } 
        prev->next = temp->next;
        delete temp;

        return head;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        //will store the data of next node in the one we have to delete then will delete the next node...
        ListNode *temp;
        temp=node->next;
        node->val=temp->val;
        node->next=temp->next;
        delete temp;
    }
};
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
        //Firstly calculating the number of ll elements...
        int count = 0;
        ListNode *temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }

        //curr==mid...
        count=(count/2)+1;
        ListNode *mid=head;
        ListNode *prev=NULL;
        int i=1;
        while(i<count){
            prev=mid;
            mid=mid->next;
            i++;
        }

        //edge case if there is only single node...
        if(prev==NULL){
            return NULL;
        }

        else{
            prev->next=mid->next;
            delete mid;
        }

        return head;

    }
};
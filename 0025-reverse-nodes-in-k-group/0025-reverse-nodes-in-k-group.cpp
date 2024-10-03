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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)return NULL;
        //check if there are at least k nodes to reverse
        ListNode* check=head;
        for(int i=0;i<k;i++){
            if(check==NULL)return head;
            check=check->next;
        }
        //reverse the first k nodes
        ListNode* temp=NULL;
        ListNode* curr=head;
        ListNode* prev=NULL;
        int count=0;
        while(curr!=NULL&&count<k){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            count++;
        }
        if(temp!=NULL){
            head->next=reverseKGroup(temp,k);
        }
        return prev;
    }
};
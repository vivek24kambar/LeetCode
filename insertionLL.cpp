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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1=headA;
        ListNode *temp2=headB;

        int LA=0,LB=0;

        while(temp1!=NULL){
            LA++;
            temp1=temp1->next;

        }

        while(temp2!=NULL){
            LB++;
            temp2=temp2->next;
            
        }

        temp1=headA;
        temp2=headB;

        if(LA>LB){
            for(int i=0 ; i<LA-LB; i++){
                temp1=temp1->next;
            }
        }

        else{
            for(int i=0 ; i<LB-LA; i++){
                temp2=temp2->next;
            }
        }

        while(temp1 != temp2) {
            if (temp1 == nullptr || temp2 == nullptr) {
                return nullptr;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;


        
    }
};
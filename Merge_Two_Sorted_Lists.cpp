class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode*temp=new ListNode(0);
        ListNode*curr=temp;
        while(l1!=NULL && l2!=NULL)
        {
            if  (l1->val<l2->val)
            {   curr->next=l1;
                l1=l1->next;
             curr=curr->next;
            }
            else
            {
                curr->next=l2;
                l2=l2->next;
                curr=curr->next;
            }
            
        }
        while(l1!=NULL)
        {
            curr->next=l1;
            l1=l1->next;
            curr=curr->next;
        }
        while(l2!=NULL)
        {
            curr->next=l2;
            l2=l2->next;
            curr=curr->next;
        }
        
        return temp->next;
    }
};


class compare
{
    public:
    bool operator()(ListNode*a,ListNode*b)
    {  return a->val>b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<ListNode*,vector<ListNode*>,compare>pq;
        
         if (lists.size()==0)
        {
            ListNode*t=NULL;
            return t;
        }
        
        
        for (auto temp: lists)
        {
            if (temp!=NULL)
            pq.push(temp);
        }
        
        if (pq.empty())
        {
            ListNode*t=NULL;
            return t;
        }
        
        ListNode*dummy=new ListNode(0);
        ListNode*last=dummy;
        while(pq.empty()==false)
        {
            ListNode*t=pq.top();
            ListNode*n=new ListNode(pq.top()->val);
            pq.pop();
            if (t->next)
                pq.push(t->next);
            last->next=n;
            last=n;
            
            
        }
        return dummy->next;
        
    }
};

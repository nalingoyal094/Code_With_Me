class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int  n=0;// n is count of missing numbers till now
        
        int  c=1;
        int  i=0;
        int ans=0;
        while(n<k)
        {
            
            if (c==arr[i])
            {
                c++;
                i++;
                
                if (i==arr.size())// reached the end of array
            {
                ans=c-1+k-n;
                break;
            }
                
            }
            else  // my c!=arr[i] 
            {
                n++;
                if(n==k) // k was count of missing numbers we want
                {
                    ans=c;
                    break;
                }
                else  // i.e my n has not become k yet
                {
                    c++;
                 
                }
            }
        }
        return ans;
        
    }
};

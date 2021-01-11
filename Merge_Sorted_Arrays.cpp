class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n)
    {
        int i=m-1;
        int j=n-1;
        int curr=m+n-1;
       
        while(i>=0 && j>=0)
        {
            if(A[i]>=B[j])
            {
                A[curr]=A[i];
                i--;
                curr--;
            }
            else
            {
                A[curr]=B[j];
                j--;
                curr--;
            }
        }
        
        
        while(j>=0)
        {
            A[curr]=B[j];
            j--;
            curr--;
        }
        
    }
};

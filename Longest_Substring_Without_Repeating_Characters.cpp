class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.size();
        int i=0;
        int j=0;
        map<char,int>mp;// to look for the duplicate value
        int res=0;
        while(j<n)// iterating
        {
            while (mp[s[j]]>0)// we have duplicate value of s[j] in our substring
            {
                mp[s[i]]--;// decrease the count of s[i]
                i++;// increment i 
            }
            
            res=max(res,j-i+1);
            mp[s[j]]++;
            j++;
        
        }
 return res;       
    }
};


class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        string s1="";
        for(int i=0;i<w1.size();i++)  //extracting first string by concatenating
        {
            s1+=w1[i];
        }
        string s2="";
        for(int i=0;i<w2.size();i++)   //extracting second string by concatenating
        {
            s2+=w2[i];
        }
        if(s1==s2)                     //comparing
        {
            return true;
        }
        else
            return false;
    }
};

//using map

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) { 
        unordered_map<int ,int >mp;        
        for (int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int count=0;
        
        for (int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]>0 && mp[k-nums[i]]>0)
            {
                if (nums[i]==k-nums[i])
                {
                    if (mp[nums[i]]==1)
                        continue;
                }
                mp[nums[i]]--;
                mp[k-nums[i]]--;
                count++;
            }
        }
        return count;
    }
};


// 2 ptr approach

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        int cnt=0;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        
        while(i<j)
        {
            if(nums[i]+nums[j]==k)
            {
                cnt++;
                j--;
                i++;
            }
            else if (nums[i]+nums[j]<k)
            {
               i++;
            }
            else
            {
                j--;
            }
        }
        return cnt;
        
    }
};

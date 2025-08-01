class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> expectednums;
        if(n==1)
        {
            return 1;
        }
        
        for(int i=0;i<n;i++)
        {
         if(i<=n-2)
         { if(nums[i+1]==nums[i]);
          else
          expectednums.push_back(nums[i]);
         }
         else
         {
            if(nums[i]==nums[i-1])
            expectednums.push_back(nums[i]);
            else expectednums.push_back(nums[i]);
         }
        
        }
        
        int k=expectednums.size();
        for(int i=0;i<k;i++)
        {
            nums[i]=expectednums[i];
        }
        return k;
    }
};
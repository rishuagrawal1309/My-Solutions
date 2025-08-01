class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int min,loc,c;
        for(int i=0;i<n;i++)
        {
          min=nums[i];
          loc=i;
          for(int j=i+1;j<n;j++)
            {
             if(min>nums[j])
                {
                 min=nums[j];
                 loc=j;
                }
            }
          if(i!=loc)
          swap(nums[i],nums[loc]);
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i)
            {
                c=i;
                break;
            }    
            if(i==n-1)   
            {
                c=n;
            }      
        } 
       return c;
    }
    
};
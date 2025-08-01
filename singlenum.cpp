class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int min,loc,c;
        for(int i=0;i<n;i++)
        {
          min=nums[i];
          loc=i;
          for(int j=i+1;j<n;j++)
            {
              if(nums[j]<min)
                {
                 min=nums[j];
                 loc=j;
                }
            } 
            if(i!=loc)
            {
              swap(nums[i],nums[loc]);
            }     
        }
        for(int i=0;i<n-1;i++)
        {
            if(i<n-2)
            {
                int x=nums[i]^nums[i+1];
                if(x==0)
                {
                 i++;
                }
                else 
                {
                  c=nums[i];
                  break;
                }
            }
            c=nums[n-1];
              
        }
        return c;
    }
};
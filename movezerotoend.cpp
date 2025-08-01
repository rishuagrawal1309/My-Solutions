class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n=nums.size(),c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
                c=c+1;    
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                for(int j=i;j>0;j--)
                {
                    if(nums[j-1]==0)
                        { nums[j-1]=nums[j];
                           nums[j]=0;
                        }
                    else break;     
                     
                }
            }
        }
        for(int i=c;i<n;i++)
        {
            nums[i]=0;
        }

    }
};
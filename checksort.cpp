class Solution {
public:
    bool check(vector<int>& nums) {

        int n=nums.size(),c=0;
       
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                c=c+1;
                if(c>1)
                {
                    return false;
                }
            }
            if(i==n-2)
            {
                if((nums[n-1]>nums[0])&&(c==1))
                {
                   return false;
                }
            }
            
        }
        
        return true;
    }
};
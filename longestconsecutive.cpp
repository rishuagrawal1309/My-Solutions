class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int min,loc;
        for(int i=0;i<n-1;i++)
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
            if(i!=loc)
            swap(nums[i],nums[loc]);
           }
        }
        int c=1, d=1;
        for(int i=0;i<n-1;i++)
        {
            
            if(nums[i+1]==nums[i]+1)
            c++;
            if(nums[i+1]>nums[i]+1) 
            {
                if(d<c)
                {d=c;
                c=1;}
            }    
            
        }
        return d;
        
    }
};
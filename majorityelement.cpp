class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c=floor(n/2),m=0,res;
        for(int i=0;i<n;i++)
        {
            if(m<=c)
            {
                m=0;
             for(int j=0;j<n;j++)
             {
                if(nums[i]==nums[j])
                    m++; 
             }
             if(c<m)
             {
                res=nums[i];
             }
            }     

        }
        return res;
       

    }
};
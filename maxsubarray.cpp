class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int m=0,s;
        if(n==1)
        {
            m=nums[0];
        }
        for(int i=0;i<n;i++)
        {
            int s=0;
            for(int j=i;j<n;j++)
            {
                s=s+nums[j];
                if(m<s)
                m=s;
                
            }
        }
        return m;
    }
};
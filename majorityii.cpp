class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
         int min,loc;
        if(n==1)
        return nums;
        for(int i=0;i<n-1;i++)
        {
           min=nums[i];
           loc=i;
           for(int j=i+1;j<n;j++)
           {
            if(nums[j]<nums[i])
            {
                min=nums[j];
                loc=j;
            }
           }
           if(i!=loc)
            swap(nums[i],nums[loc]);
        }
        vector<int> res;
        int c;
        for(int i=0;i<n-1;i++)
        {
            c=1;
           for(int j=i+1;j<n;j++)
           {
            if(nums[j]==nums[i])
            {
                c++;
                i=j;
            }
            
           }
            if(c>floor(n/3))
            {
                res.push_back(nums[i]);
                c=1;
            }    
        }
        if((nums[n-1]!=nums[n-2])&&c>floor(n/3))
        {
            res.push_back(nums[n-1]);
        }
        return res;
    }
};
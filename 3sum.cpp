class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     int n=nums.size();
     vector<vector<int>> ans;
     for(int i=0;i<n-2;i++)
     {
        
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
              if(nums[i]+nums[j]+nums[k]==0)
             {
                 vector<int> res;
                 res.push_back(nums[i]);
                 res.push_back(nums[j]);
                 res.push_back(nums[k]);

                 
                 ans.push_back(res);
             }
            }
        }
        
     } 
     return ans;
    }
};
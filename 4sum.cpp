class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       vector<vector<int>> ans;
       int n=nums.size();
       int flag=0;
       for(int i=0;i<n-3;i++)
       {
        for(int j=i+1;j<n-2;j++)
        {
            for(int k=j+1;k<n-1;k++)
            {
                for(int l=k+1;l<n;l++)
                {
                 long long s=(long long) nums[i]+nums[j]+nums[k]+nums[l];
                    if(s==target)
                    {
                        vector<int> res;
                        res.push_back(nums[i]);
                        res.push_back(nums[j]);
                        res.push_back(nums[k]);
                        res.push_back(nums[l]);
                        sort(res.begin(),res.end());
                        int x=ans.size();
                        for(int a=0;a<x;a++)
                        {
                            if(ans[a]==res)
                           {
                             flag=1;
                             break;
                           } 
                        }
                        if(flag==0)
                        ans.push_back(res);
                        else flag=0;
                    }
                }
            }
        }
       
       } 
        return ans;
    }
};
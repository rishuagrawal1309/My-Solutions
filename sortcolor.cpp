class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int min,loc;
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
    }
};
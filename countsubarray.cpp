     int n=nums.size();
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     int n=nums.size();
     int nos=0,s=0,s1=0;
     for(int i=0;i<n-1;i++)
     {
        s=nums[i];
        if(nums[i]==k)
        nos++;
        for(int j=i+1;j<n;j++)
        {
          s=s+nums[j];
      
          if(s==k)
          {
            nos++;
            
          }  
          
        }


        
        
     }   
     if(nums[n-1]==k)
        nos++;
      return nos;  
    }
};
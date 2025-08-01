class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n=nums.size();
       int i, p=1, m=0;
       for(i=0;i<n-1;i++)
       {
        p=nums[i];
        for(int j=i+1;j<n;j++)
        {
           if(p>m)
          {
            m=p;
          }
          p=p*nums[j];
          if(p==0) break;
          if(p>m)
          {
            m=p;
          }
          
        }
        if(p<0 && m==0)
            m=p;
        
       } 
       if(i==n-1 && m>0 && nums[i]>m)
       m=nums[i];
       if(i==n-1 && m<=0 && nums[i]>m)
       {m=nums[i];}
       if(i==n-1 && m==0 && p==1 && nums[n-1]<0)
       m=nums[i];
       return m;
    }
};
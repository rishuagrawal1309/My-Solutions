class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),mx=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
               
               if(mx<(prices[j]-prices[i]))
                  mx=prices[j]-prices[i];   
            }
        }
       return  mx;
        
    }
};
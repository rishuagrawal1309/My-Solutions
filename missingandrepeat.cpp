class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> res;
        int min,loc;
        for(int i=0;i<n-1;i++)
        {
            min=arr[i];
            loc=i;
            for(int j=i+1;j<n;j++)
            {
                if(min>arr[j])
                {
                    min=arr[j];
                    loc=j;
                }
            }
            if(i!=loc)
            {
                swap(arr[i],arr[loc]);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]==arr[i])
                {
                    res.push_back(arr[j]);
                    break;
                }
            }
    
        }
        int x=1,i;
        for( i=0;i<n-1;i++)
        {
            if(arr[i]==x||arr[i+1]==x)
            {
                x++;
            }
            else
            {
                res.push_back(x);
                break;
            }    
        }
        if(x==n)
        {
            res.push_back(x);
        }
        return res;
    }
};
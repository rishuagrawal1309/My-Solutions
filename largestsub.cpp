class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        int n=arr.size();
        int i,s,c,m=0;
        for( i=0;i<n-1;i++)
        {
            s=arr[i];
            c=1;
            for(int j=i+1;j<n;j++)
            {
                s=s+arr[j];
                c++;
                if(s==0)
                {
                    if(m<c)
                    m=c;
                }
            }
            if(arr[i]==0)
            {
                if(m==0)
                m++;
            }
        }
        if(i==n-1 && arr[i]==0)
        {
            if(m==0)
            m++;
        }
        return m;
    }
};
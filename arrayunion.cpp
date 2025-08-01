class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n1=a.size(),n2=b.size();
        vector<int> c;
        vector<int> d;
        for(int i=0;i<n1;i++)
        {
            if(i<=n1-2)
           {
             if(a[i+1]!=a[i])
             {
                  c.push_back(a[i]);
                  
             }
           } 
           if(i==n1-1)
           {
             c.push_back(a[i]);
              
           }
           
        }
        for(int i=0;i<n2;i++)
        {
            if(i<=n2-2)
            {
              if(b[i+1]!=b[i])
             {
                c.push_back(b[i]);
             }
            }
            if(i==n2-1)
            {
              c.push_back(b[i]);
            }
        }
        
        int s=c.size();
        int min,loc;
        for(int i=0;i<s;i++)
        {
            min=c[i];
            loc=i;
            for(int j=i+1;j<s;j++)
            {
                if(min>c[j])
                {
                    min=c[j];
                    loc=j;
                }
            }
            if(i!=loc)
            swap(c[i],c[loc]);
        }
        for(int i=0;i<s;i++)
        {
           if(i<=s-2)
           {
             if(c[i+1]!=c[i])
               {
                 d.push_back(c[i]);
                }
           }
           if(i==s-1)
           {
               
             d.push_back(c[i]);
               
           }
        }
        
        return d;
        
    }
};
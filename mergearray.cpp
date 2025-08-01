class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        int a=m, b=n;
        if(n==0);
        else if(m==0 && n==1)
            {
                nums1[0]=nums2[0];
            }
        else    
        while(i<m+n)
        {
            if(i<m+n-1)
            if(n!=0)
            if((nums1[i]<=nums2[j])&&(nums1[i+1]>=nums2[j]))
            {
                int k;
                for(k=m-1;k>i;k--)
                {
                  nums1[k+1]=nums1[k];
                }
                nums1[k+1]=nums2[j];
                j++;
                i++;
                while(nums1[i+1]==nums1[i]) i++;
                m++;
                n--;
            }
            
            else if((nums1[i]<=nums2[j])&&(nums1[i]!=0)) i++;
           if(nums1[i]==0)
            {
                while(i<m+n)
                {
                    nums1[i]=nums2[j];
                    j++;
                    i++;
                }   
                break; 

            }
            if(n!=0)   
            if(nums1[i]>=nums2[j])
            {
               int k;
                for(k=m-1;k>=i;k--)
                {
                  nums1[k+1]=nums1[k];
                }
                nums1[k+1]=nums2[j];
                i++;
                j++;
                m++;
                n--;
                if(j==b)
                break;
            }
        }
    }
};


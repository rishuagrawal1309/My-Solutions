class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==k)
            {
                f=1;
                
            }
        }
        if(f==0)
         return false;
        else 
         return true;
        
    }
};
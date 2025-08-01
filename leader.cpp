

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int n=arr.size();
        vector<int> lead;
        for(int i=0;i<n-1;i++)
        {
           int j;
            for( j=i+1;j<n;j++)
            {
                if(arr[j]>arr[i])
                break;
                    
            }
            if(j==n)
            lead.push_back(arr[i]);
            
            
        }
        lead.push_back(arr[n-1]);
        return lead;
    }
};
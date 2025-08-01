#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,i,j;
    cin>>n;
    for( i=0;i<n;i++)
    {
       for( j=0;j<n;j++)
            {
                 if(i==0||i==n-1||j==0||j==n-1)
                cout<<"4";
                else 
                {
                    if((i==1||i==n-1)&&(j!=0||j!=n-1))
                    {
                        cout<<"3";
                    }
                }
            }
        cout<<endl;
    }
       
    return 0;
}

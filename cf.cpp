#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[10],b[10];
    
    for(int i=0;i<10;i++)
    {
       cin>>a[i];
    }
    for(int i=0;i<10;i++)
    {
        int c=0;
        
        for(int j=0;j<10;j++)
        {
            if(a[j]==a[i])
            {
                c=c+1;
            }
        }
        cout<<"{"<<a[i]<<","<<c<<"}"<<",";
    }
    return 0;
}
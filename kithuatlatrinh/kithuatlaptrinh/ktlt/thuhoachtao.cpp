#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,b[1001],sum=0;
    cin>>n>>m ;
    for(int i=0; i<n; i++)
    {	
    	cin>>b[i]; 
    }
    b[n]=0;
    for(int i=0; i<n+1; i++)
    {
        if (m>=b[i])
        {
            sum=sum+b[i];
        }
        else
        {
            sum=sum+m;
            if(b[i]-m>=m)
                b[i+1]=b[i+1]+m;
            else
                b[i+1]=b[i+1]+b[i]-m;
        }
    }
    cout<<sum; 
    return 0;
}

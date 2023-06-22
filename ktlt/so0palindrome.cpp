#include<bits/stdc++.h>
using namespace std;

long long daochuoi(long long x)
{
	int s=x%10;
	x/=10;
	
	while(x>0)
	{
		s=s*10+x%10;
		x/=10;
	}
	return s;
}
int main()
{
	int n;
	long long a[100];
	
	cin>>n; 
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i]; 
	}
	
	for(int i=0; i<n; i++)
	{
		if(a[i]/10==0)
		{
			cout<<a[i]<<" "; 
		}
		else if(a[i]==daochuoi(a[i]))
		{
			cout<<a[i]<<" "; 
		}
	}
	return 0;
}

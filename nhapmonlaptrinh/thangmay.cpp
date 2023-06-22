#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,k,a[2001];
	cin>>n>>k;
	for(i=1;i<=n;i++)
	cin>>a[i];
	sort(a+1,a+n+1);
	long kq=max(0,a[n%k]-1);
	for(i=n%k+k;i<n;i+=k)
		kq=kq+a[i]-1;
	cout<<kq*2;
}

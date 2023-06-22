#include <bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long int  n,i,t;
	unsigned long long int  b[100000];
	
	cin >> n;
	for (i=1;i<=n;i++)
	{
		b[1]=1;
		b[2]=1;
		if (i>=3)
		b[i]=(b[i-1]+b[i-2])%(10*10*10*10*10*10);
	}
		cout << b[n] ;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

long long lamtron(double n)
{
	return int(n*10)%10 >= 5 ? n+1 : n;
}

int main()
{
	double n, m;
	cin >> n >> m;
	
	int dem = 0;
	while(n < m)
	{
		n += lamtron(n*10/100*1.0);
		dem++;
	}
	cout << dem;
	return 0;
}

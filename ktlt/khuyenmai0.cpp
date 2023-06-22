#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long m, n, t;
	cin >> m >> n >> t;
	long long dem = n;
	while(n > m)
	{
		n -= (m+1);
		dem--;
	}
	cout << t*dem;
	return 0;
}

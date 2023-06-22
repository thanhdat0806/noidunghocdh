#include<bits/stdc++.h>
using namespace std;

long long luythua(long long x, long long n)
{
	return n <= 0 ? 1 : (x*luythua(x, n-1))%10000;
}

int main()
{
	long long x, n;
	cin >> x >> n;	
	cout << luythua(x, n%10000)%10000;
	return 0;
}

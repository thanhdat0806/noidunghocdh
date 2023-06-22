#include<bits/stdc++.h>
using namespace std;

long long tong(long long n)
{
	if(n <= 0)
		return 0;
	return n%10 + tong(n/10);
}

int main()
{
	long long n;
	cin >> n;
	
	if(n%tong(n) == 0)
		cout << "1";
	else
		cout << "0";
	return 0;
}

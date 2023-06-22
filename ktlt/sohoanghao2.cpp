#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	
	long long tong = 1;
	for(int i = 2; i<sqrt(n); i++)
	{
		if(n%i == 0)
		{				
			tong += i;
			if(n/i == sqrt(n))
				break;
			tong += n/i;
		}
	}
	if(tong == n)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
    

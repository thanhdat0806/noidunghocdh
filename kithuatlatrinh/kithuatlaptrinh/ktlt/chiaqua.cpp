#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int x;
	int a1 = 0;
	int a2 = 0;
	
	cin >> n;
	for(int i = 0; i<n; i++)
	{
		cin >> x;
		if(x == 100)
			a1 ++;
		else
			a2 ++;
	}

	if( (a1 == 0) && (a2 % 2 != 0))
		cout << "NO";
	else if(a1 % 2 == 0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}

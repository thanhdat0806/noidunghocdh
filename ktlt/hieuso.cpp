#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	
	long long a[100000];
	for(int i = 0; i<n; i++)
		cin >> a[i];
		
	int min = a[0];
	int max = - INT_MAX;
	for(int i = 1; i<n; i++)
	{
		if(a[i] < min)
			min = a[i];
		if(a[i] - min > max)
			max = a[i] - min;
	}
	cout << max;
	return 0;
}
    

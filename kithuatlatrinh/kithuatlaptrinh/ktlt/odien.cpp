#include<bits/stdc++.h>
using namespace std;

int n;
int x;
int a[100];

int Min_O()
{
	if(x <= 1)
		return 0;
	
	int temp = a[0];
	int dem = 1;
	for(int i = 1; i<n; i++)
	{
		if(temp >= x)
			return dem;
		temp = (temp-1) + a[i];
		dem++;
	}
	if(temp < x)
		return -1;
}

int main()
{
	cin >> n;
	
	cin >> x;
	
	for(int i = 0; i<n; i++)
		cin >> a[i];
		
	sort(a, a+n, greater<int>());
	
	cout << Min_O();
	return 0;
}

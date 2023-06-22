#include<bits/stdc++.h>
using namespace std;

int n;
int a[100];
bool b[100];

void In()
{
	for(int i = 0; i<n; i++)
		cout << a[i];
	cout << endl;
}

void lietke(int x)
{
	if(x >= n)
	{
		In();	return;
	}
	
	for(int i = 1; i<=n; i++)
	{
		if(b[i] == true)
		{
			b[i] = false;
			a[x] = i;	lietke(x+1);
			b[i] = true;		
		}
	}
}

int main()
{
	cin >> n;
	int dem = 1;
	for(int i = 1; i<=n; i++)
	{
		dem *= i;
		b[i] = true;	
	}
	cout << dem << endl;
	lietke(0);
}

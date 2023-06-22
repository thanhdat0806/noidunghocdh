#include<iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	
	for(int i = 1; i<=m/5; i++)
		for(int j = 1; j<=m/3; j++)
			for(int k = 3; k<=m*3; k+=3)
				if( ( (i*5 + j*3 + k/3) == m ) && (i+j+k == n) )
				{
					cout << i << " " << j << " " << k;
					return 0;
				}
	cout << -1;
	return 0;
}

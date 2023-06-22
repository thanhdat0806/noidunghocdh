#include <iostream>
using namespace std;

int main()
{
	long long n , giaithua = 1;
	cin >> n;
	for (long long i = 1; i <= n; i++) 
	{
		giaithua = giaithua*i;
	}
	cout << giaithua << endl;
    return 0;
}

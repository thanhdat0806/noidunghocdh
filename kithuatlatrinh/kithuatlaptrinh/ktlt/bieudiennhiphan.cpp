#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	char s[1000];
	int t = 0;
	
	if(n==0) printf("0"); 
	while (n > 0) {
		s[t] = '0' + n % 2;
		t++;
		n = n / 2;
	}
	s[t] = '\0';
	for (int i = strlen(s) - 1; i >= 0; i--) {
		cout << s[i];
	}
	cout << endl;
    return 0;
}
    

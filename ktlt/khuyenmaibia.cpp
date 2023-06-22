#include <iostream>
using namespace std;
 
int main(){
	int n, a, b, c;
	
	cin>>n; 
	b = n / 10;
	do{
		c = n + 3 * b;
		a = b;
		b = c / 10;
	}while (a != b);
	cout<<n+3*b; 
	return 0;
}
    

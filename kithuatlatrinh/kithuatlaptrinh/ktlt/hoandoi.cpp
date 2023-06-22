#include<stdio.h>
int main()
{
	long long a,b;
	long long tam;
	scanf("%lld",&a);
	scanf("%lld",&b);
	tam=a;
	a=b;
	b=tam;
	printf("%lld",a);
	printf("%lld",b);
}

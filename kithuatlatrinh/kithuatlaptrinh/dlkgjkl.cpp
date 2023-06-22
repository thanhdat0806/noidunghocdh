#include<stdio.h>
int main()
{
	int a=5;
	int *p,*q;
	p=&a;q=&a;
	*p++;
	*q++;
	printf("%d\t",a);
}

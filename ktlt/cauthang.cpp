#include<stdio.h>
int main()
{
	long long a;
	scanf("%lld",&a);
	for( int i=1; i<=a;i++)
	{ 
		for(int j=i; j<a; j++)
		{
			printf("."); 
		 }for( int k=0; k<i; k++)
		{
			printf("x"); 
		 } 
		printf("\n"); 
	 } 
 }

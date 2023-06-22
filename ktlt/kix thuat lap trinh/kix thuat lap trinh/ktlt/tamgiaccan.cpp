#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b)
	{
		printf("LA TAM GIAC CAN");
		exit(0);
	}
	if(a==c)
	{
		printf("LA TAM GIAC CAN");
		exit(0);
	}
	printf("KHONG PHAI TAM GIAC CAN");
}

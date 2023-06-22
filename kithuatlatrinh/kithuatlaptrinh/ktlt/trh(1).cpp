#include<stdio.h>
int main()
{
	int tu;
	int uoc=0;
	
	int mau;
	int i=2;
	scanf("%d",&tu);
	scanf("%d",&mau);
	while(i<tu||i<mau)
	{
		if(tu%i==0&&mau%i==0)
		{
			uoc=i;
		}
		i++;
	}
	printf("%d",uoc);
}

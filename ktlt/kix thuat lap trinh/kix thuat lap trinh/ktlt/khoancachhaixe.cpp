#include<stdio.h>
int main()
{
	int dap,may,t;
	scanf("%d",&t);
	if(t<=15)
	{
		dap=t*10;
		may=t*30;
		printf("%d",may-dap);
	}
}

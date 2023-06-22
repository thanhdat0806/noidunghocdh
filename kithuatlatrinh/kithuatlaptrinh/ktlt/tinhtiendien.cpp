#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	
		if(n<200)
		{
			printf("%d",n*1500);
		}
		if(n>=200)
		{
			printf("%d",n*3000);
		}
	
	return 0;
}

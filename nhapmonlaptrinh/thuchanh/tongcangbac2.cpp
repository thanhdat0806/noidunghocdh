#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	do{
	printf("nhap n:");
	scanf("%d",&n);
	}while(n<2||n>20);
	float s=0;
	int t=0;
	for(int i=1;i<=n;i++)
	{
		t+=i;
		s=s+sqrt(t);
	}
			
	printf("%f",s);
}

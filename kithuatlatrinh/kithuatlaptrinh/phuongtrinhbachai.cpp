#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	int delta;
	float X1,X2,X;
	scanf("%d%d%d",&a,&b,&c);
	delta=b*b-4*a*c;
	if(delta<0)
	{
		printf("VO NGHIEM");	
		exit(0);
	}
	if(delta==0)
	{
		X=(-b)/(2*a);
		printf("PT CO NGHIEM KEP\n");
		printf("X = %0.2f",X);
		exit(0);
	}
	if(delta>0)
	{
		X1=(-b+sqrt(delta))/2*a;
		X2=(-b-sqrt(delta))/2*a;
		printf("PT CO HAI NGHIEM\n");
		printf("X1 = %0.2f\n",X1);
		printf("X2 = %0.2f",X2);
		exit(0);
	}
}

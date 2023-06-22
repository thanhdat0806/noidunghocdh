#include<stdio.h>
#include<stdlib.h>
int main()

{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a==0&&b==0)
	{
		printf("VO SO NGHIEM");
		exit(0);
	}
	if(a==0&&b!=0)
	{
		printf("VO NGHIEM");
		exit(0);
	}
	printf("PT CO NGHIEM\n");
	printf("X = %0.2f",(float)-b/(float)a);
}

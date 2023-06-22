#include<stdio.h>
int gt(int n)
{
	int m=1;
	for(int i=1;i<=n;i++)
	{
		m=m*i;
	}
	return m;
}
int main()
{
	float s=0;
	int n;
	scanf("%d",&n);
	for(int k=1;k<=n;k++)
	{
		float q=1/gt(k);
		s=s+q;
	}
	printf("%f",s);
}

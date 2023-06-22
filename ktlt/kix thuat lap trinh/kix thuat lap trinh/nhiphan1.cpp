#include<stdio.h>
int a[100];
int n;
void in()
{
	printf("\n");
	for(int i=1;i<=n;i++)
	{
		printf("%d",a[i]);
	}
}
void lk(int i)
{
	if( i==n+1)
	{
		in();
		return;
	}
	a[i]=0;
	lk(i+1);
	a[i]=1;
	lk(i+1);
}
int main()
{
	scanf("%d",&n);
	lk(1);
}

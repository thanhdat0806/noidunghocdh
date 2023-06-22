#include<stdio.h>
int main()
{
	int n;
	int i;
	int a[1000];
	int duong=0,am=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			duong=duong+1;
		}
		if(a[i]<0)
		{
			am=am+1;
		}
	}
	printf("SO DUONG: %d\n",duong);
	printf("SO AM: %d",am);
}

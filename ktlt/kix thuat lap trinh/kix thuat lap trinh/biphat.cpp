#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int a[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int t=0;
	int v=0;
	while(t<n)
	{
		t++;
		if(a[t]==1)
		{
			v=v+1;
		}
		if(a[t]==2)
		{
			v=v-1;
		}
	}
	printf("%d",abs(v));
}

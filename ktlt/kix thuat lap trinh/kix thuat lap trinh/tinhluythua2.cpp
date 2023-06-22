#include<stdio.h>
#include<math.h>
int m,n;
void luythua()
{
	long long t=0;
	for(int i=1;i<=m;i++)
	{
		t=t+float(pow(i,n));
	}
	printf("%lld",t);
}
int main()
{
	
	scanf("%d%d",&m,&n);
	luythua();
}

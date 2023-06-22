#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long a,b,k,t;
	float c,d;
	scanf("%lld%lld%lld%lld",&a,&b,&k,&t);
	c=(float(t*3)/float(a*b));
	d=float(k)/100;
		if(c<=d)
		{
			printf("YES");
			exit(0);
		}
	printf("WARNING");
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long a,b,k,t;
	scanf("%lld%lld%lld%lld",&a,&b,&k,&t);
		if(((t*3)/(a*b))<(k/100))
		{
			printf("YES");
			exit(0);
		}
	printf("WARNING");
}

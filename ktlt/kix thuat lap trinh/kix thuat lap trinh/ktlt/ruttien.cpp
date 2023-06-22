#include<stdio.h>
int main()
{
	int n;
	int so100;
	int so20;
	int so5;
	int so1;
	scanf("%d",&n);
	so100=n/100;
	so20=(n-so100*100)/20;
	so5=(n-(so100*100+so20*20))/5;
	so1=(n-(so100*100+so20*20+so5*5));
	printf("%d %d %d %d",so100,so20,so5,so1);
}

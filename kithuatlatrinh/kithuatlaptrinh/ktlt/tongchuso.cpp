#include<stdio.h>
int main()
{
	int nghin,tram,chuc,donvi;
	int n;
	scanf("%d",&n);
	nghin=n/1000;
	tram=(n%1000)/100;
	chuc=((n%1000)%100)/10;
	donvi=((n%1000)%100)%10;
	printf("%d",nghin+tram+chuc+donvi);
}

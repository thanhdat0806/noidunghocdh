#include<stdio.h>

struct phanso
	{
		int ts;
		int ms;
	};

int main()
{
	int n;
	int uoc=0;
	int j=2;
	
	struct phanso ps[100];
	printf("nhap so phan so");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("tu so phan so thu %d",i);
		scanf("%d",&ps[i].ts);
		printf("mau so phan so thu %d",i);
		scanf("%d",&ps[i].ms);
	}
	for(int i=0;i<n;i++)
	{
		while(j<ps[i].ts||j<ps[i].ms)
		{
			if(ps[i].ts%j==0&&ps[i].ms%j==0)
			{
				uoc=j;
			}
			j++;
		}
		printf("%d/%d\n",ps[i].ts/uoc,ps[i].ms/uoc);
	}
	
	for(int i=0;i<n;i++)
	{
		printf("gia tri phan so thu %d la %f",i,float(ps[i].ts)/ps[i].ms);
	}
}

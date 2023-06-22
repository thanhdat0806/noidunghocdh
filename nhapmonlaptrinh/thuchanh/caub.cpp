#include <stdio.h>

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

bool KTSNT(int x)
{
	if(x<2)
		return false;
	for(int i=2; i<=x/2; i++)
		if(x%i==0)
			return false;
	return true;
}

int main()
{
	int m,n,k,l;
	scanf("%d",&m);
	scanf("%d",&n);
	k = gcd(m,n);
	if(k == 1)
	{
		printf("\nPhai");
	}
	else
	{
		printf("\nKhong");
	}
	
	for(int i=2;i<100;i++)
	{
		for(int j=3;j<100;j++)
		{
			KTSNT(i);
			
			if((KTSNT(i)==true) && (KTSNT(j)==true))
			{
				printf("\n%d %d \n",i,j);
			}
		}
		
	}
	
	return 0;
}

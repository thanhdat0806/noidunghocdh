#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(abs(c-a)==abs(c-b))
	{
		printf("Mouse_C");
		exit(0);
	}
	if(abs(c-a)>abs(c-b))
	{
		printf("Cat_B");
		exit(0);
	}
	if(abs(c-a)<abs(c-b))
	{
		printf("Cat_A");
		exit(0);
	}
}

#include<stdio.h>
int main()
{
	int a,t=0;
	FILE *f;
	f=fopen("D:\\Bai2Inp.txt","r");
	if (f == NULL)
	{
		return 0;
	}
	fseek(f,3,SEEK_SET);
	for(int i=0;i<15;i++)
	{	
		fscanf(f,"%d",&a);
		t=t+a;
	}
	printf("%d",t);
	
	fclose(f);
}

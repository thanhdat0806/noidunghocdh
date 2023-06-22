#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int n;
	int a,b,i;
	printf("nhap n:");
	scanf("%d",&n);
	for(int i = 1; i <= n; i++)
    {
		printf("nhap tu so a=");
		scanf("%d",&a);
		printf("\n nhap mau so b=");
		scanf("%d",&b);
		if(b==0) printf("\n phan so khong ton tai");
		for(i=(int)(a/2);i>1;i--)
			{
				if(a%i==0 && b%i==0)
			{
			printf("\n phan so toi gian la %d/%d",a/i,b/i);
			break;}
			}
}
	getch();
}

#include<stdio.h>
#define giasan 1000
int main()
{
	int n;
	do{
	printf("nhap vao so nguoi thue phong:");
	scanf("%d",&n);
	}while(n<0||n>5);
	if(n<3)
		printf("So tien phong hang thansg phai dong la:%d",giasan);
	else if(n>=3 && n<=4)
		printf("So tien phong hang thansg phai dong la:%f",giasan*1.2);
	else
		printf("So tien phong hang thansg phai dong la:%f",giasan*1.5);
}

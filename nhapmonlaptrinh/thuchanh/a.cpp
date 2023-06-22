/*
Chuong trinh giai phuong trinh ax^2+bx+c=0
Input: a,b,c la cac so thuc
output: nghiem cua phuong trinh ax^2+bx+c=0
*/
#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c,x1,x2,delta;
	printf("Nhap a: ");
	scanf("%f", &a);
	printf("Nhap b: ");
	scanf("%f", &b);
	printf("Nhap c: ");
	scanf("%f", &c);
	if (a == 0)
		if (b == 0)
			if(c ==0)
				printf("PT co vo so nghiem. \n");
			else
				printf("PT vo nghiem. \n");
		else
			printf("PT co nghiem x=%f.\n", -c/b);
	else //PT bac 2 day du => tim nghiem delta
	{
		delta=(b*b)-4*a*c;
		if(delta < 0)	printf("PT co vo so nghiem. \n");
		if(delta == 0)	printf("PT co nghiem kep x=%f. \n", -b/(2*a));
		if(delta >0)
		{
			x1= (-b+sqrt(delta))/(2*a);
			x2= (-b-sqrt(delta))/(2*a);
			printf("x1=%f.\n",x1);
			printf("x1=%f.\n",x2);
		}
	}
}


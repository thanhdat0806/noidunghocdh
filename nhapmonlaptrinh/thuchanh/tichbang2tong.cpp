/*Tìm và in lên màn hình t?t c? các s? nguyên trong 
ph?m vi t? 10 d?n 99 sao cho tích c?a 2 ch? s? 
b?ng 2 l?n t?ng c?a 2 ch? s? dó.*/
#include <stdio.h>
int main()
{
	// xet cac so nguyen tu (10..99)
	int dem=0;
	printf("Cac so thoa man dieu kien la:\n");
	for(int i=10;i<=99;i++)
		{
		//tach 2 chu so thanh hang don vi, hang chuc tu i
			unsigned char dv = i % 10;
			unsigned char chuc= i / 10;
			if(dv * chuc== 2*(dv + chuc))
			{
				printf("%d \n", i);
				dem++;
			}
		}
		printf("Co %d thoa man dieu kien.\n",dem);
}

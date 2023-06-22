#include <stdio.h>
#include <math.h>

int main() {
          float a, b, c, p, s=0;
          printf("Nhap canh thu nhat: ");
          scanf("%f", &a);
	      printf("Nhap canh thu hai: ");
          scanf("%f", &b);
          printf("Nhap canh thu ba: ");
          scanf("%f", &c);
    if((a<b+c) && (b<a+c) && (c<b+a)) 
		{
	                   printf("\nDay la ba canh cua tam giac\n");
	                   p = (a+b+c)/2;
	                   s = sqrt(p*(p-a)*(p-b)*(p-c));  
	                   printf("\nDien tich cua tam giac la %f \n", s);
	        if(a==b && b==c)
	            printf("Day la tam giac deu");
	        else if(a==b || a==c || b==c)
	            printf("Day la tam giac can");

	        else if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
				printf("Day la tam giac vuong");
	        else
				printf("Day la tam giac thuong");
    	}
    else{
		printf("\nDay khong phai la ba canh cua tam giac");}
	return 0;
}

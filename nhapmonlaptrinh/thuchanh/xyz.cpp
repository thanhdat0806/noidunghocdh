#include <stdio.h>

#include <math.h>

#include<string.h>

int main()

{

          float a, b;

          char ch;

          printf("Nhap a: ");

          scanf("%f", &a);

	      printf("Nhap b: ");

          scanf("%f", &b);

          fflush(stdin);

          printf("Nhap phep tinh: ");

          ch = getchar();

        if(ch == '+')

        	printf("%f %c %f = %f",a,ch,b, a+b);

        else if(ch == '-')

        	printf("%f %c %f = %f",a,ch,b, a-b);

        else if(ch == '*')

        	printf("%f %c %f = %f",a,ch,b, a*b);

        else if(ch == '/')

        	if(b==0)

        	 printf("khong tinh duoc. b phai khac 0");

        	else

        	printf("%f %c %f = %f",a,ch,b, a/b);

        else

        printf("khong tinh duoc");

	return 0;

}

#include<stdio.h>

 
int main() {
   FILE *f1, *f2, *f3;
   char a;
   char b[100];
   char c[100];
   char d[100];
   printf("Ten file nhap 1");
   gets(b);
   printf("Ten file nhap 2");
   gets(c);
   printf("Ten file ket qua");
   gets(d);
 
   f1 = fopen(b, "r");
   f2 = fopen(c, "r");
   f3 = fopen(d, "w");
  
   do 
   {
      a = fgetc(f1);
      fputc(a, f3);
   } 
   while (a != EOF);
   fprintf(f3,"\n");
    do 
   {
      a = fgetc(f2);
      fputc(a, f3);
   } 
   while (a != EOF);
	fclose(f1);
	fclose(f2);
	fclose(f3);


}

#include<stdio.h>

 
int main() {
   FILE *fp1, *fp2;
   char a;
 
   fp1 = fopen("baitapc.txt", "r");
   fp2 = fopen("baitapc1.txt", "w");
  
 
   do {
      a = fgetc(fp1);
      fputc(a, fp2);
   } while (a != EOF);
 
   return(0);
}

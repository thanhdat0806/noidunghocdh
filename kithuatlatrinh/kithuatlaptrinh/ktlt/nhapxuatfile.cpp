#include<stdio.h>
int main()
{
   FILE* inp = fopen("input.txt", "r");    // file input.txt chung thu muc voi file ma nguon
   FILE* out = fopen("output.txt", "w");   // chay xong mo file output.txt nay xem ket qua
 
   int a, b;
   fscanf(inp, "%d%d", &a, &b);
   fprintf(out, "%d", a+b);
 
   fclose(inp);
   fclose(out);
 
  
}

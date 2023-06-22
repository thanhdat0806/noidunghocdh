#include<stdio.h>
int main()
{
	


FILE * f;




int a, b;
char s[100];
FILE *f = fopen(“D:\\temp.txt”, “w”);
fprintf(f, “%d %d\n”, 5, 7);
fprintf(f, “Ky thuat lap trinh\n”); 
fputc(f, ‘A’);
fclose(f);
}

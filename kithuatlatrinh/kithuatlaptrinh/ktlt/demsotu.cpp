#include<conio.h>
#include<stdio.h>
#include<string.h>
int demsotu(char *a)
{
    int i, dem=0;
    int n = strlen(a);
    if (a[0] != 46)
    {
        dem=1;
	}
    for (i = 0; i < n-1; i++)
    {
    	if (a[i] == 46 && a[i+1] != 46)
        {
            dem++;
        }
    }
    return dem;
}

int main()
{
    char chuoi[100];
    gets(chuoi);
    int a=demsotu(chuoi);
    printf("%d", a);
    return 0;
}

#include <stdio.h>
#include <windows.h>
#include <gotoxy.h>
int main()
{
    char *s = "nguyenvanquan7826";
    for(int i=0;i<100;i++)
    {
    	system("cls");
    	gotoxy(i,i);
    	printf("%s\n",s);
    	Sleep(1000);
	}
}

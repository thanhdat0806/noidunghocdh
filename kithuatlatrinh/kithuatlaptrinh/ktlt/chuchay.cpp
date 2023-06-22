#include<stdio.h>
#include<string.h>
#include <windows.h>
void gotoxy(int x, int y)
{
    static HANDLE h = NULL;  
    if(!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };  
    SetConsoleCursorPosition(h,c);
}
int main()
{
	char s[100];
	printf("nhap chuoi:\t");
	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		system("cls");
		gotoxy(i,3);
		printf("%s",s);
		Sleep(1000);
	}
	

}

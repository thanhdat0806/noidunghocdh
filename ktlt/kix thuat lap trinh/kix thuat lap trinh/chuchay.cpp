#include<stdio.h>
#include<string.h>
#include<windows.h>
#define X 20
#define Y 10
#define width 40
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
	char s[] ="hello";
	
	while(1)
	{
		for(int i=0;i<=width;i++)
		{
		
			system("cls");	
			gotoxy(i,Y);
			printf("%s",s);
			i++;
			Sleep(100);
		}
	
	}
}

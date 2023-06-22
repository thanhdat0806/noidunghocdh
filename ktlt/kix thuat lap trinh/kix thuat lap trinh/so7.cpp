#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
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
	int dx=1,dy=1;
	int x=12,y=8;
	while(_kbhit()==0)
	{
		gotoxy(x,y); cout<<" ";
		if(x+dx<0||x+dx>79) dx=-dx;
		if(y+dy<0||y+dy>79) dy=-dy;
		x=x+dx;
		y=y+dy;
		gotoxy(x,y); cout<<"o";
		Sleep(10);
	}
}

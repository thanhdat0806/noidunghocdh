    #include <iostream>
    #include <windows.h>
    #include <conio.h>    
    using namespace std;
    
    // gia lap ham gotoxy trong Windows
    void gotoxy(short xx, short yy)
    {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);        
        COORD c = { xx, yy };
        SetConsoleCursorPosition(h, c);
    }

    int main()
    {
       int dx = 1, dy =1;
       int x=12, y=8;
       while(_kbhit()== 0)
       {
           gotoxy(x,y); cout<< " ";
           if (x+dx < 0 || x+dx > 79) dx = -dx;
           if (y+dy < 0 || y+dy > 24) dy = -dy;
           x= x + dx;
           y= y + dy;
           gotoxy(x,y); cout<< "*";
           Sleep(80);
       }
       return 0;
    }


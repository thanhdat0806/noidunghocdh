    #include <iostream>
    #include <string.h>    
    #include <windows.h>
    #include <conio.h>    
    using namespace std;
    
    #define X 20
    #define Y 10
    #define WIDTH 40

	struct Rect
	{
		int top, left;
		int width, height;
		int color;
	};
    
    // gia lap ham gotoxy trong Windows
    void gotoxy(short xx, short yy)
    {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);        
        COORD c = { xx, yy };
        SetConsoleCursorPosition(h, c);
    }

	void setcolor(int color)
    {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);        
        SetConsoleTextAttribute(h, color);
    }

    int main()
    {
       Rect a[100];
       int n, i, x, y;
       cin>>n;
       for(i= 0; i< n; i++)
       {
       		cin>>a[i].left>>a[i].top;    	
       		cin>>a[i].width>>a[i].height;
       		cin>>a[i].color;
	   }
       system("cls");
       for(i= 0; i< n; i++)
       {
       		setcolor(a[i].color);
       		for(y= 0; y< a[i].height; y++)
       			for(x= 0; x< a[i].width; x++)
			   {
			   		gotoxy(2*(a[i].left + x), a[i].top + y);
			   		cout<<(char)254u;
			   }
   	   }
   	   getch();
       return 0;
    }


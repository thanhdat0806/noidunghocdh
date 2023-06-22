#include <stdio.h>
#include <windows.h>
#include <conio.h>    

// gia lap ham gotoxy trong Windows
void gotoxy(short xx, short yy)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);        
    COORD c = { xx, yy };
    SetConsoleCursorPosition(h, c);
}

////////////////////////////////////////////////////////////////////////////

int a[3][3] = { { 2, 3, 6}, { 1, 0, 5},  { 4, 7, 8} };

void In()
{
	gotoxy(0,0);
	for(int i = 0; i< 3; i++)
	{
		for(int j = 0; j< 3; j++)
			if (a[i][j] != 0)
				printf("%d ", a[i][j]);
			else 
				printf("  ");
		printf("\n");
	}
}

int main()
{

	int x = 1, y =1;
	int lastx, lasty;
	char c;
    do
    {
    	In();
		c= getch();
		lastx = x;
		lasty = y;
	    switch (c)
	    {
		 	case 72: if (y< 2) y++; break;	   // up
			case 75: if (x< 2) x++; break;	   // left
		 	case 77: if (x> 0) x--; break;	   // right
		 	case 80: if (y> 0) y--; break;	   // down
	    }
	    a[lasty][lastx] = a[y][x];
	    a[y][x] = 0;
	}while (c!= 27);
	
	return 0;
}

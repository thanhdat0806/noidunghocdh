#include <stdio.h>
#include <windows.h>
#include <conio.h>   
#define x1 30
#define y1 10

char Hang[8], Cheoc[15], Cheop[15];
char VitriCot[8];
char SoCach = 0;

void gotoxy(short xx, short yy)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);        
    COORD c = { xx, yy };
    SetConsoleCursorPosition(h, c);
}

void VeBanco()
{
   SoCach+=1;
   gotoxy(x1,y1-2);
   printf("Cach thu %d:",SoCach);
   for(int j= 0; j< 8; j++)
      for(int i= 0; i< 8; i++)
      {
	       gotoxy(x1 + 2*i, y1 + j);
		   printf(".");
      }
 }

void Xuat()
{
   VeBanco();
   for(int i=0;i<8;i++)
   {
      gotoxy(x1 + 2*i, y1 + VitriCot[i]); 
	  printf("w");
   }
   getchar();
}
 
void DeQuy(int i)
{
   int j;
   if (i == 8) Xuat();
   else
	   for(j=0;j<8;j++)
	      if ((Hang[j]==0)&&(Cheoc[i+j]==0)&&(Cheop[i-j+7]==0))
	      {
	          Hang[j] = 1;
			  Cheoc[i+j] = 1; 
			  Cheop[i-j+7] = 1;
	          VitriCot[i] = j;
	          DeQuy(i+1);
	          Hang[j] = 0;
			  Cheoc[i+j] = 0;
			  Cheop[i-j+7] = 0;
	      }
}

int main()
{
    int i;
    for(i=0; i<8; i++) Hang[i]=0;
    for(i=0; i<15; i++) Cheoc[i]=0;
    for(i=0; i<15; i++) Cheop[i]=0;

    printf("\n\n\nChuong trinh tim 8 hau. An phim Enter chuyen sang cach tiep theo...");
    DeQuy(0);
    gotoxy(x1, y1+9);
	printf("Da tim xong");
}

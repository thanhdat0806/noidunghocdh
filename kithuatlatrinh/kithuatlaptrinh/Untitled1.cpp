#include<stdio.h>
#include<gotoxy.h>


int main()
{
    char s[] = "hihi minh la truong quoc huy";
    int i=0;
	while(1)
	{
		system("cls");
		gotoxy(1,i);
		printf("%s",s);
		i++;
		if(i==10)
		{
			i--;
		}
		
		Sleep(500);
	}
}

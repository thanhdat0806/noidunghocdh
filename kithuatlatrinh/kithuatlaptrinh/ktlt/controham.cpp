#include <iostream>
using namespace std;

int Cong(int a, int b)
{
	return a+b;
}
int Tru(int a, int b)
{
	return a-b;
}
int Nhan(int a, int b)
{
	return a*b;
}

typedef int (*PhepToan)(int, int);

int main()
{
	PhepToan pheptoan;
	int x, y;
	char c;
	
	printf("Nhap so hang x va y: ");
	scanf("%d %d", &x, &y); fflush(stdin);
	printf("Nhap phep toan: ");
	scanf("%c", &c);
	if (c=='+') pheptoan= Cong;
	if (c=='-') pheptoan= Tru; 
	if (c=='*') pheptoan= Nhan; 			
	int kq = pheptoan(x, y);
	printf("Ket qua: %d", kq);
}


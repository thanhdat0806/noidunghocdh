/*
Minh h?a x? lý m?ng 2 chi?u.
Vi?t chuong trình (m?i ch?c nang cài d?t thành m?t hàm):
a) Nh?p ma tr?n kích thu?c mxn ph?n t? là s? nguyên.
b) In ra ma tr?n v?a nh?p
c) Tìm ph?n t? l?n nh?t trên toàn ma tr?n.
d) Ki?m tra t?t c? các ph?n t? c?a ma tr?n có ph?i SNT?
e) Vi?t hàm tính t?ng các ph?n t? trên 1 dòng c?a ma tr?n.
f) Tính t?ng ph?n t? c?a toàn b? ma tr?n, s? d?ng hàm ? câu e.
g) S?p x?p ma tr?n sao cho trên m?i dòng các ph?n t? tang d?n.
*/

#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 20
#define MAX_ELEMENT 50

typedef int matran[ARRAY_SIZE][ARRAY_SIZE];
void TaoMT(matran a, int &m, int &n);   // a 
void NhapMT(matran a, int &m, int &n);  // a
void XuatMT(matran a, int m, int n);    // b
int MaxMT(matran a, int m, int n);      // c
int LaSNT(int n);                       // d
int LaMTSNT(matran a, int m, int n);    // d
void SapXepMT(matran a, int m, int n);  // g

/////////////////////////////////////////////////////////////////////
int main()
{
    matran a;
    int m,n;
    
    TaoMT(a, m, n);
    //NhapMT(a, m, n);
    XuatMT(a, m, n);

    // In ra ph?n t? l?n nh?t c?a ma tr?n
    printf("Phan tu lon nhat ma tran = %d\n", MaxMT(a, m, n));

    // Ki?m tra ma tr?n có ch?a toàn s? nguyên t??
    if(LaMTSNT(a, m, n)) 
        printf("Tat ca phan tu la SNT.\n");
    else
        printf("Khong phai tat ca phan tu la SNT.\n");

    // S?p x?p ma tr?n m?i hàng tang d?n
    SapXepMT(a, m, n);
    // In ra ma tr?n sau khi s?p x?p
    printf("\nMa tran sau khi sap xep:\n");
    XuatMT(a,m,n);
}

/////////////////////////////////////////////////////////////////////
// T?o ma tr?n mxn ph?n t? có giá tr? ng?u nhiên
void TaoMT(matran a, int &m, int &n)
{
    printf("Nhap so hang:");
    scanf("%d", &m);
    printf("Nhap so cot:");
    scanf("%d", &n);    

    for(int i=0; i < m; i++)   
        for(int j=0; j < n; j++)
        {
            // T?o giá tr? ng?u nhiên trong kho?ng [0, MAX_ELEMENT) 
            a[i][j] = rand() % MAX_ELEMENT;
        }
}

// Nh?p ma tr?n t? bàn phím
void NhapMT(matran a, int &m, int &n)
{
    printf("Nhap so hang:");
    scanf("%d", &m);
    printf("Nhap so cot:");
    scanf("%d", &n);    
    
    for(int i=0; i < m; i++)   
        for(int j=0; j < n; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
}

void XuatMT(matran a, int m, int n)
{
    for(int i=0; i < m; i++)
        {
            for(int j=0; j < n; j++)
                printf("%5d", a[i][j]);
            printf("\n");
        }
}

/* Hàm tr? v? ph?n t? l?n nh?t c?a ma tr?n
Cách gi?i quy?t:
- Gán ph?n t? max = a[0][0]
- L?n lu?t so sánh max v?i các ph?n t? còn l?i, 
n?u ph?n t? nào > max thì gán max b?ng ph?n t? dó.
*/
int MaxMT(matran a, int m, int n)
{
    int max = a[0][0];
    for(int i=0; i < m; i++)
        for(int j=0; j < n; j++)
            if(max < a[i][j]) max = a[i][j];
    return max;
}

/* Hàm LaSNT(int n) tr? v? 1 n?u n là s? nguyên t?, ngu?c l?i tr? v? 0
*/
int LaSNT(int n)
{
    if(n < 2) return 0;
    for(int i=2; i <= n/2; i++)
        if(n % i == 0) return 0;
    return 1;
}

/* Hàm LaMTSNT(int a, int m, int n) tr? v? 1 n?u toàn b? ph?n t? là SNT,
   ngu?c l?i tr? v? 0
*/
int LaMTSNT(matran a, int m, int n)
{
    for(int i=0; i < m; i++)
        for(int j=0; j < n; j++)
            // N?u có ít nh?t 1 ph?n t? không là SNT thì tr? v? 0
            if(!LaSNT(a[i][j])) return 0;
    // n?u không x?y ra tru?ng h?p trên -> t?t c? ph?n t? d?u là SNT -> tr? v? 1
    return 1;
}

/*
S?p x?p t?ng hàng tang d?n.
Cách gi?i quy?t:
- L?n lu?t xét t?ng hàng c?a ma tr?n.
- M?i hàng c?a ma tr?n {a[i][0], a[i][1],..,a[i][n-1]} là m?ng 1 chi?u, 
  ti?n hành s?p x?p m?ng 1 chi?u.
*/
void SapXepMT(matran a, int m, int n)
{
    // Xét t?ng hàng c?a ma tr?n
    for(int i=0; i < m; i++)
    { // S?p x?p các ph?n t? trên hàng i tang d?n
      // gi?i thu?t d?i ch? tr?c ti?p
        for(int j=0; j < n-1; j++)
            for(int k=j+1; k < n; k++)
            if(a[i][j] > a[i][k]) 
            {
                int t = a[i][j];
                a[i][j] = a[i][k];
                a[i][k] = t;
            }
    }
}

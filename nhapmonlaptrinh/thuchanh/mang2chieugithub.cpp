/*
Minh h?a x? l� m?ng 2 chi?u.
Vi?t chuong tr�nh (m?i ch?c nang c�i d?t th�nh m?t h�m):
a) Nh?p ma tr?n k�ch thu?c mxn ph?n t? l� s? nguy�n.
b) In ra ma tr?n v?a nh?p
c) T�m ph?n t? l?n nh?t tr�n to�n ma tr?n.
d) Ki?m tra t?t c? c�c ph?n t? c?a ma tr?n c� ph?i SNT?
e) Vi?t h�m t�nh t?ng c�c ph?n t? tr�n 1 d�ng c?a ma tr?n.
f) T�nh t?ng ph?n t? c?a to�n b? ma tr?n, s? d?ng h�m ? c�u e.
g) S?p x?p ma tr?n sao cho tr�n m?i d�ng c�c ph?n t? tang d?n.
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

    // Ki?m tra ma tr?n c� ch?a to�n s? nguy�n t??
    if(LaMTSNT(a, m, n)) 
        printf("Tat ca phan tu la SNT.\n");
    else
        printf("Khong phai tat ca phan tu la SNT.\n");

    // S?p x?p ma tr?n m?i h�ng tang d?n
    SapXepMT(a, m, n);
    // In ra ma tr?n sau khi s?p x?p
    printf("\nMa tran sau khi sap xep:\n");
    XuatMT(a,m,n);
}

/////////////////////////////////////////////////////////////////////
// T?o ma tr?n mxn ph?n t? c� gi� tr? ng?u nhi�n
void TaoMT(matran a, int &m, int &n)
{
    printf("Nhap so hang:");
    scanf("%d", &m);
    printf("Nhap so cot:");
    scanf("%d", &n);    

    for(int i=0; i < m; i++)   
        for(int j=0; j < n; j++)
        {
            // T?o gi� tr? ng?u nhi�n trong kho?ng [0, MAX_ELEMENT) 
            a[i][j] = rand() % MAX_ELEMENT;
        }
}

// Nh?p ma tr?n t? b�n ph�m
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

/* H�m tr? v? ph?n t? l?n nh?t c?a ma tr?n
C�ch gi?i quy?t:
- G�n ph?n t? max = a[0][0]
- L?n lu?t so s�nh max v?i c�c ph?n t? c�n l?i, 
n?u ph?n t? n�o > max th� g�n max b?ng ph?n t? d�.
*/
int MaxMT(matran a, int m, int n)
{
    int max = a[0][0];
    for(int i=0; i < m; i++)
        for(int j=0; j < n; j++)
            if(max < a[i][j]) max = a[i][j];
    return max;
}

/* H�m LaSNT(int n) tr? v? 1 n?u n l� s? nguy�n t?, ngu?c l?i tr? v? 0
*/
int LaSNT(int n)
{
    if(n < 2) return 0;
    for(int i=2; i <= n/2; i++)
        if(n % i == 0) return 0;
    return 1;
}

/* H�m LaMTSNT(int a, int m, int n) tr? v? 1 n?u to�n b? ph?n t? l� SNT,
   ngu?c l?i tr? v? 0
*/
int LaMTSNT(matran a, int m, int n)
{
    for(int i=0; i < m; i++)
        for(int j=0; j < n; j++)
            // N?u c� �t nh?t 1 ph?n t? kh�ng l� SNT th� tr? v? 0
            if(!LaSNT(a[i][j])) return 0;
    // n?u kh�ng x?y ra tru?ng h?p tr�n -> t?t c? ph?n t? d?u l� SNT -> tr? v? 1
    return 1;
}

/*
S?p x?p t?ng h�ng tang d?n.
C�ch gi?i quy?t:
- L?n lu?t x�t t?ng h�ng c?a ma tr?n.
- M?i h�ng c?a ma tr?n {a[i][0], a[i][1],..,a[i][n-1]} l� m?ng 1 chi?u, 
  ti?n h�nh s?p x?p m?ng 1 chi?u.
*/
void SapXepMT(matran a, int m, int n)
{
    // X�t t?ng h�ng c?a ma tr?n
    for(int i=0; i < m; i++)
    { // S?p x?p c�c ph?n t? tr�n h�ng i tang d?n
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

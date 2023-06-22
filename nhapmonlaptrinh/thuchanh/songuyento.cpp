/*
Vi?t chuong trình in n s? nguyên t? d?u tiên.
*/
#include<stdio.h>
#include<math.h>
long lasonguyento(int n)
{
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) 
            return 0;
    return (n>=2 && 1);
}
int main()
{
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    int c=0;
    for(int i=2;c<n;i++)
    {
        if(lasonguyento(i))
        {
            printf("%d\t",i);
            c++;
        }
    }
    return 0;
}


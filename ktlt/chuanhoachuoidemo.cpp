#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a[100];
   gets(a);
   chuanhoachuoi(a);
   printf("%s",a);
   getch();
}
int chuanhoachuoi(char a[])
{
    int n=strlen(a),i=n-1;
    while(a[i]==' ')i--;  // xoa het cac ki tu trong o cuoi chuoi
    a[i+1]='/0';
 
    i=0;
    while(a[0]==' ')i++;          //xoa het cac ki tu trong o dau chuoi
    strdelete(a,0,i-1);
 
    n=strlen(a);
    for(i=0; i<n;++i)
        if((a[i]>=65)&&(a[i]<=90))  //kiem tra co phai la ky tu hoa
            a[i]+=32;        //chuyen tat ca ve ky tu thuong
 
    i=0;
    while(i<strlen(a))                //xoa hai ki tu trong lien tiep
     if((a[i]==' ')&&(a[i+1]==' '))
         strdelete(a,i,1);
     else ++i;
 
    n=strlen(a);
   for(i=0; i<n; i++)
    if(a[i]==' ')
        a[i+1]-=32;  //chuyen chu cai sau khoang trang thanh chu hoa
   
   a[0]=toupper(a[0]);//chuyen chu cai dau tien thanh chu hoa
   
   i=0;
   while (a[i]!='\0')        //xoa cac ki tu khong phai la chu cai
   {
        if((!isalpha(a[i]))&&(a[i]!=32))
            strdelete(a,i,1);
        else ++i;
    }
}

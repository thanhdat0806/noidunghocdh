#include<stdio.h>
#include<math.h>
using namespace std;
int sum(int n){
     int tong =0;
     for(int i=1;i<=n;i++)
     {tong=tong+i;}
     return tong;
}
bool sotien(int n){
	int n;
    for(int i=0;i<n;i++){
        if(a[i] <= a[i+1])
		{
            sotien=false;}
    }
}
}
int main()
{
    int n;
    int a[20];
    float tong=0;
    do{
    printf("\nNhap n:");
    scanf("%d",&n);
    if(n<=0|| n>=50)
    printf("\nDieu kien 0<n<50\n");
    }while(n<=0||n>=50);
    if(sotien(n))
        printf("YES");
    else
        printf("NO");
    return 0;
    for(int i=1;i<=n;i++){
        tong=tong+1/(float)sqrt(sum(i));
     }
     printf("%0.2f",tong);   
}



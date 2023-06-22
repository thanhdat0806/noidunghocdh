#include<stdio.h>
 
void lucky(long k)
{
    k--;
    if(k==0) {printf("4");return;}
    if(k==1) {printf("7");return;}
    lucky(k/2);
    printf(k%2?"7":"4");
}
 
int main()
{
    long k;
    scanf("%ld",&k);
    lucky(k);    
}

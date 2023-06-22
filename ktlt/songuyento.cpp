#include <stdio.h>
#include <math.h>
 
int main()
{
    long long n;
    scanf("%lld", &n);
    if(n < 2){
        printf("NO");
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("YES");
    }else{
        printf("NO");
    }
}

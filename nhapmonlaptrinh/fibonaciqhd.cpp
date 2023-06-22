#include <cstdio>

using namespace std;

int main(){
   int n, F[100];
   F[1] = 1;
   F[2] = 1;
   for (int i = 3; i <= 50000; i++)
      F[i] = F[i - 1] + F[i - 2];
   scanf("%d", &n);
   printf("%d", F[n]);
}

#include <iostream>
using namespace std;

int calculateTimeFryCake(int n, int k)
{   
    if(n<k) return 10;
    int x =2*n/k;
    int sum = x*5;
    if((2*n)%k!=0){
        sum=sum+1*5;
    }
    return sum;
}
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<calculateTimeFryCake(n,k);
}
    

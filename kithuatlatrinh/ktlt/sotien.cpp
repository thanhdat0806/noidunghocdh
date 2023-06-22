 
#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[20];
    int j = 0;
    cout<<"Nhap vao so nguyen n: ";
    cin>>n;
    while(n!=0){
        arr[j] = n % 10;
        n/=10;
        j++;        
    };
    bool IsDESC1(int arr[], int n) 
		{
	    int dem = 0;
	    for (int i = 0; i < j-1; i++)
	    {
	        if (a[i + 1] <= a[i]) dem++;
	    }
	    if (dem == n - 1) return true;
	    	cout<<"YES";
	    else return false;
	    	cout<<"NO"
		};
}
 

#include <iostream>
#include "bits/stdc++.h"
#include <math.h>
 
using namespace std;
 
int main(){
	int x,a[100001],kq; 
	kq=INT_MAX;
	cin>>x;
	for (int i=1;i<=x;i++) 
		cin>>a[i];
	sort(a+1, a+1+x);
	for (int i=2;i<=x;i++)
	   kq=min(kq,a[i]-a[i-1]);
	   cout<<kq;
}

#include <iostream>
#include "bits/stdc++.h"
#include <math.h>
using namespace std;

 
int main(){
	int n, i, k, a = 0, b = 0;
	cin>>n; 
	for (i = 0; i < n; i++){
		cin>>k;
		if (k == 1){ a++; }else{ b++; }
	}
	cout<<abs(a - b);
	return 0;
}
    

#include <iostream>
#include "bits/stdc++.h"
 
using namespace std;
 
int main(){
	int a, b, k, g = 0, v = 1;
	cin>>a>>b; 
	k = b / a;
	while (v < k){
		v *= 2;
		g++;
	}
	if (v > k){ g--; }
	cout<<g; 
	return 0;
}

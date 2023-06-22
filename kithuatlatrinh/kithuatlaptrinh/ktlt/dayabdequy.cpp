#include<iostream>
using namespace std;
int n, a[11];
bool check = false;
void display(){
	int flagg=0;
	for(int i=1; i <=n ; i++)
	{
		if(a[i]==1&&a[i+1]==1)
		{
			flagg=1;
			break;
		}
	}
	if(flagg==0)
	{
		for (int i = 1; i <= n; i++)
		{
		 	if(a[i]==1)
		 		cout << 'B' ;
		 	else
		 		cout << 'A';
 		}
 		cout << endl;
	}

}
void nextString(){
	int i = n;
	while (a[i]==1 && i > 0)
		i--;
	if (i == 0) 
		check = true; 
	else
	{
	  a[i] = 1;    
	  for (int j = i + 1; j <= n; j++)
	  {
	   a[j] = 0; 
	  }
	}
}
int main(){
 	cin >> n;
 	for (int i = 1; i <= n; i++)
 	{ 
  		a[i] = 0;
 	}
 	while (!check)
	{
  		display();      
  		nextString();   
 	}
}
    

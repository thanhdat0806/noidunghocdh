#include<iostream>
#include<math.h>
using namespace std;
int main(int n)
{
    cin>>n;
    round(n=n/2);
	int cRow = n * 2 + 1;      
 
    for (int i = 0; i < cRow; i++)
    {
        int     cStar;         
        int     cSpace;
        if (i <= n)
        {
            cStar = i * 2 + 1;
            cSpace = n - i;
        }
        else
        {
            cStar = (n * 2 - i) * 2 + 1;
            cSpace = i - n;
        }
        int     j;
        for (j = 0; j < cSpace; j++)
            cout << "*";
        for (j = 0; j < cStar; j++)
            cout << "D";
        for (j = 0; j < cSpace; j++)
            cout << "*";
        cout << endl;
    }
}

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inMatrix("maTrix1.txt");
    ofstream outMatrix("matrix.txt");

    int (*a)[100] = new int[100][100];
    int n;
    inMatrix >> n;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            inMatrix >> a[i][j];


    int max = a[0][0];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(a[i][j] > max)
                max = a[i][j];
    outMatrix << max;

    inMatrix.close();
    outMatrix.close();

    return 0;
}

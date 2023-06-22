#include<iostream>
using namespace std;

int n,sy,sx,dy,dx,a[4] = {1,-1,0,0},b[4] = {0,0,1,-1},danhDau[105][105];
void nhap ()
{
    cin >> n >> sy >> sx >> dy >> dx;
    for(int i = 0;i<n;i++)
	{
        for(int j = 0;j<n;j++)
		{
            cin >> danhDau[i][j];
        }
    }
}
void backtracking(int y,int x)
{
    for(int i = 0;i<4;i++)
	{
        int u = y+a[i];
        int v = x+b[i];
        if(u>=0 && u<n && v>=0 && v<n && danhDau[u][v] == 0)
		{
            danhDau[u][v] = 1;
            backtracking(u,v);
        }
    }
}
int main ()
{
    nhap();
    backtracking(sy-1,sx-1);
    if(danhDau[dy-1][dx-1]==1) cout << "YES";
    else cout << "NO";
}

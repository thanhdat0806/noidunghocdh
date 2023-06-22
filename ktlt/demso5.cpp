#include <iostream>
using namespace std;
int DemChuSo(int n)
{
    int dem = 0;
    while (n >= 1 )
    {
        int t = n % 10;
		if(t == 5)
		
        dem++;

        n = n / 10;
    }
    return dem;
}

int main()
{
    int n;
    cin >> n;

    int result = DemChuSo(n);
    cout <<result << endl;
       
}

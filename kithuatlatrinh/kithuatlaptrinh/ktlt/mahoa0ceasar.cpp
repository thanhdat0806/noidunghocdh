#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    char s[105];
    cin >> s;
    int k;
    cin >> k;
    int lenS = strlen(s);
    for(int i = 0;i<lenS;i++)
	{
        if(s[i] - k  < 97) s[i] = s[i] + 26 - k;
        else s[i] = s[i] - k;
    }
    for(int i = 0;i<lenS;i++)
	{
        cout << s[i];
    }
}

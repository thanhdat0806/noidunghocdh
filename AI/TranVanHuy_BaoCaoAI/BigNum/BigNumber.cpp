#include <string>
#include <iostream>
#include<stdio.h>
#include<stdlib.h>#include <iostream> 
  
// Maximum number of digits in  
// output 
#define MAX 100000 
 
using namespace std;
 
 
 /////////////////////////////////////////////////Cau a: Tinh cong, nhan 2 so Lon
int stringToNum(char c)     // chuyen char sang so
{
    return c - '0';
}
 
char numToString(int n)     // chuyen so sang char
{
    return (char)(n+48);
}
 
void chuanHoa(string &a, string &b) // lam 2 xau co do dai bang nhau
{
    int l1 = a.length(), l2 = b.length();
    if (l1 >= l2)
    {
        b.insert(0, l1-l2, '0');    // chen vao dau cua b cac ky tu '0'
    }
    else
    {
        a.insert(0, l2-l1, '0');    // chen vao dau cua a cac ky tu '0'
    }
}
 
string sum(string a, string b)  // tong 2 so
{
    string s = "";
    chuanHoa(a,b);      // chuan hoa
    int l = a.length();
     
    int temp = 0;
    for (int i=l-1; i>=0; i--)   // duyet va cong
    {
        temp = stringToNum(a[i]) + stringToNum(b[i]) + temp;    // tinh tong tung doi mot
        s.insert(0,1,numToString(temp%10));         // gan phan don vi vao
        temp = temp/10;     // lay lai phan hang chuc
    }
    if (temp>0)  // neu hang chuc > 0 thi them vao KQ
    {
        s.insert(0,1,numToString(temp));
    } 
    return s;
}
 
// nhan so co 1 chu so voi so co nhieu chu so (VD 4 va 7826), lam tuong tu nhu phep cong
string nhanNho(char a, string b)    
{
    string s = "";
    int temp = 0;
    for (int i=b.length()-1; i>=0; i--)      
    {
        temp = stringToNum(a) * stringToNum(b[i]) + temp;
        s.insert(0,1,numToString(temp%10));
        temp = temp/10;
    }
     
    if (temp>0)
    {
        s.insert(0,1,numToString(temp));
    } 
    return s;
}
 
string nhan(string a, string b)     // nhan 2 so lon
{
    string s = "";
    int l = a.length();
    string s1[l];
     
    for (int i=l-1; i>=0; i--)   // nhan tung chu so cua a voi b sau do cong don vao
    {
        s1[i] = nhanNho(a[i], b);   // nhan tung so cua a voi b
        s1[i].insert(s1[i].length(), l-i-1, '0');   
        s = sum(s, s1[i]);  // cong don theo cach cong so lon
    }
    return s;
}
 
 /////////////////////////////////////////////////////Cau b: Tinh giai thua
 
 int myStrlen(char *str)
{
    int i =0;

    while(str[i++]);

    return i-1;
}

char* myStrRev(char *str)
{
    int i = 0;
    int j = myStrlen(str)-1;

    while(i<j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    return str;
}



char* multiply(char* num1, char* num2)
{
    int n1 = myStrlen(num1);
    int n2 = myStrlen(num2);
    int shifter = 0;
    char *val =  (char *)calloc(sizeof(char),n1+n2+1);

    int i,j;
    for(j=n2-1;j>=0;j--)
    {
        int k = n1+n2 -1 - shifter;
        int multipler = num2[j] - '0';

        for(i=n1-1;i>=0;i--)
        {
            int temp = (multipler * (num1[i] - '0')) + (val[k] == '\0'? 0 : val[k] - '0');
            val[k--] =  temp%10 + '0';
            if(temp > 9)
            {
                val[k] = ((val[k] == '\0'? 0 : val[k] - '0') + (temp/10)) + '0';
            }
        }

        shifter++;
    }

    int nonNullIndex=0;

    while(val[nonNullIndex] == '0' || val[nonNullIndex] == '\0') nonNullIndex++;

    return val+nonNullIndex;

}


char* convertToString(int num)
{
    long int n = num;
    int i=0,j=0;
    while(n)
    {
        i++;
        n/=10;
    }

    char* str = (char *)calloc(sizeof(char),i+1);

    while(num)
    {
        str[j++] = num%10 + '0';
        num /=10;
    }

    myStrRev(str);
    return str;

}

char* factorial(int n)
{
    char* result = "1";
    int i;
    for(i=1;i<=n;i++)
    {
        result = multiply(result,convertToString(i));
    }

    return result;
}

/////////////////////////////////Cau c: Tinh a^n
int multiply(int x, int res[], int res_size) { 
  
// Initialize carry 
int carry = 0; 
  
// One by one multiply n with 
// individual digits of res[] 
for (int i = 0; i < res_size; i++) { 
    int prod = res[i] * x + carry; 
  
    // Store last digit of 
    // 'prod' in res[] 
    res[i] = prod % 10; 
  
    // Put rest in carry 
    carry = prod / 10; 
} 
  
// Put carry in res and 
// increase result size 
while (carry) { 
    res[res_size] = carry % 10; 
    carry = carry / 10; 
    res_size++; 
} 
return res_size; 
} 
  
// This function finds 
// power of a number x 
void power(int x, int n)  
{ 
  
//printing value "1" for power = 0 
if(n == 0 ){  
    cout<<"1"; 
    return; 
} 
  
  
int res[MAX]; 
int res_size = 0; 
int temp = x; 
  
// Initialize result 
while (temp != 0) { 
    res[res_size++] = temp % 10; 
    temp = temp / 10; 
} 
  
// Multiply x n times 
// (x^n = x*x*x....n times) 
for (int i = 2; i <= n; i++) 
    res_size = multiply(x, res, res_size); 
  
cout << x << "^" << n << " = "; 
for (int i = res_size - 1; i >= 0; i--) 
    cout << res[i]; 
} 
 
int main(int argc, char **argv)
{
    string a, b, s;
 
 	cout<<"Tinh Cong, Nhan 2 so a, b:\n";
    cout<<"Nhap a va b"<<endl;
     
    getline(cin, a);
    getline(cin, b);
     
    s = sum(a,b);
    cout<<"Tong cua a va b : "<<s<<endl;
     
    s = nhan(a,b);
    cout<<"Tich cua a va b : "<<s<<endl;
    
    int num = 0;

 	cout<<"Tinh giai thua:\n";
    printf("Nhap so: ");
    scanf("%d", &num);

    printf("\nfactorial of %d = %d! = %s\n\n", num,num,factorial(num));
     
     
     ///////////Cau c: Tinh a^n
     int base;
     int exponent;
     
     cout<<"Tinh a^n: \n";
     cout<<"nhap a: ";
     cin>>base;
     cout<<"\nnhap n: ";
     cin>>exponent;
     cout<<"\na^n= ";
	power(base, exponent); 
    return 0; 
}

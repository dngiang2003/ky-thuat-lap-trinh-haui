#include<bits/stdc++.h>
#define epsilon 0.0001

using namespace std;

int main()
{
   float a,x,k=0;
   cout << "Nhap so can tinh: ";
   cin >> a;
   x = a;
   while(fabs((k-x)/k)>=epsilon)
   {
       k= x;
       x = (x*x + a)/(2*x);
   }
   cout << "Can bac 2 cua " << a << " la: " << x;
    return 0;
}

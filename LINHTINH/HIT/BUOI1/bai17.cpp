#include<bits/stdc++.h>
using namespace std;

bool check(int n)
{
    int dem = 0;
    if(n < 2) return false;
    else if(n == 2) return true;
    else
    {
        for(int i = 2; i<= sqrt(n); i++)
        {
            if(n%i == 0)
            {
                dem = 1;
                return false;
            }
        }
        if(dem == 0)return true;
    }
}

bool demUoc(int x)
{
    int dem = 0;
    for(int i= 1;i<=x;i++)
    {
        if(x%i == 0) dem++;
    }

    if(check(dem) == true)
        return true;
}

void dem()
{
    int n,dem =0;
    cout << "Nhap n: ";
    cin >> n;

    for(int i =1; i<=n; i++)
    {
        if(demUoc(i) == true)
            dem++;
    }

    cout << "tu 1 den " << n << " co " << dem << " so gan nguyen to snt la: ";
    for(int i =1; i<=n; i++)
    {
        if(demUoc(i) == true)
            cout << i << " ";
    }
}

int main()
{
    dem();
    return 0;
}

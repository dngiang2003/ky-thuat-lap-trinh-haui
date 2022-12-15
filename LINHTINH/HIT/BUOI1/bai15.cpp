#include <iostream>
#include <math.h>
#define M 2021065122

using namespace std;

void nhapx(float &x) {
	cout << "Nhap x = ";
	cin >> x;
}
void nhapn(int &n) {
	cout << "Nhap n = ";
	cin >> n;
}
void Swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
float P(float x, int n) {
	float res = 0;
	for (int i=2; i<=n; i++) {
		res += pow(x, i)/pow(3, i-1);
	}
	return res + 2022;
}
int tongChan(int a, int b) {
	int tong = 0;
	for (int i=a; i<=b; i++) {
		if (i>5 && i%2==0) {
			tong += i;
		}
	}
	return tong;
}
int main() {
	int n, m;
	float x;
	nhapx(x);
	nhapn(n);
	m = M%10+10;
	cout <<"P = "<<round(P(x, n)*1000)/1000<<endl;
	if (n>m) Swap(n, m);
	cout <<"n = "<<n<<endl;
	cout <<"x = "<<x<<endl;
	cout <<"m = "<<m<<endl;
	cout <<"Tong = "<<tongChan(n, m);
	return 0;
}

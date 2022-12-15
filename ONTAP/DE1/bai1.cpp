#include <iostream>
#include <math.h>

using namespace std;

// ham nhap
void nhap(int &n, int &m) {
	cout << "Nhap n = "; cin >> n;
	cout << "Nhap m = "; cin >> m;
	if (n > m) swap(n , m);
}

// ham tinh tong 
int tinhTong(int n, int m) {
	int tong = 0;
	for (int i = n; i <= m; i++)
		if (i % 15 == 0)
			tong += i;
	return tong;
}

// ham F(x, n)
long double f(float x, int n) {
	if (x == 0) return 1;
	long double res = 2020*exp(1)*fabs(x);
	for (int i = 1; i <= n; i++)
		res += 1.0*n/pow(x, i);
	return res;
}
int main() {
	int n, m;
	nhap(n, m);
	float x;
	cout << "Nhap x = "; cin >> x;
	cout << "Tong cac so chia het cho ca 3 va 5 trong doan [" << n << ", " << m << "] = " << tinhTong(n ,m) << endl;
	cout << "Tong cac so chia het cho ca 3 va 5 trong doan [0" << 1 << ", " << m << "] = " << tinhTong(1 ,m) << endl;
	cout << "Ket qua T = " << round((f(x ,m) - f(x, n)) * 1000) / 1000;
	return 0;
}


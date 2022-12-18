#include <iostream>
#include <math.h>

using namespace std;

void nhap(float &x, int &n) {
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap n = ";
	cin >> n;
	while (n <= 0) {
		cout << "Nhap lai n = ";
		cin >> n;
	}
}

long long giaiThua(int n) {
	if (n <= 0) return 1;
	long long res = 1;
	for (int i = 1; i <= n; i++)
		res *= i;
	return res;
}

long double p(float x, int n) {
	return pow(x, n) / giaiThua(n);
}

long double s(float x, int n) {
	long double res = 1;
	for (int i = 1; i <= n; i++)
		res += pow(x, 2*i) / giaiThua(2*i);
	return res;
}

int main() {
	float x;
	int n;
	nhap(x, n);
	cout << "Ket qua S(x, 2n) = " << round(s(x, 2*n)*1000)/1000;
	return 0;
}

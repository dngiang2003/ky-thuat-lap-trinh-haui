#include <iostream>
#include <math.h>

using namespace std;

void nhap(float &x, int &k) {
	cout << "Nhap x = "; cin >> x;
	cout << "Nhap k = "; cin >> k;
	while (k < 0) {
		cout << "Nhap lai k = ";
		cin >> k;
	}
}

long double f(float x, int n) {
	if (n == 0) return 1;
	long double res = 2020 * pow(x, n + 1);
	for (int i = 1; i <= n; i++)
		res += pow(x, i + 1) / (n*i);
	return res;
}

long double p(float x, int n) {
	long double res = 0;
	for (int i = 1; i <= n; i++)
		res += exp(1) * i * x;
	return res;
}

int main() {
	float x;
	int k;
	nhap(x, k);
	cout << "Ket qua = " << round((f(x, k) / p(x, 2*k)) * 1000) / 1000;
	return 0;
}


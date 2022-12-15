#include <iostream>
#include <math.h>

using namespace std;

void nhap(int &n, float &x) {
	cout << "Nhap n = ";
	cin >> n;
	while (n<=0) {
		cout << "Nhap lai n = ";
		cin >> n;
	}
	cout << "Nhap x = ";
	cin >> x;
}

float mu(float x, int n) {
	if (n == 1) {
		return x;
	} else {
		return mu(x, n-1)*x;
	}
}

int tong(int n) {
	if (n<=0) return 0;
	int res = 0;
	for (int i=1; i<=n; i++)
		res += i;
	return res;
}

int gt(int n) {
	if (n==0||n==1) return 1;
	int res = 1;
	for (int i=2; i<=n; i++) {
		res *=i;
	}
	return res;
}

float S(float x, int n) {
	float res = 1;
	for (int i=0; i<=n; i++) {
		res += mu(x, 2*i+1)/gt(2*i+1);
	}
	return res;
}

int main() {
	int n;
	float x;
	nhap(n, x);
	cout << "Ket qua = "<<round(S(x, n)*100)/100;
	return 0;
}


#include <iostream>
#include <math.h>

using namespace std;

void nhap(float &x, float &y, int &n) {
	cout << "Nhap x = "; cin >> x;
	cout << "Nhap y = "; cin >> y;
	cout << "Nhap n = "; cin >> n;
	while (x <= 0) {
		cout << "Nhap lai n = ";
		cin >> n;
	}
}

float dienTich(float x, float y) {
	return round(x*y*100)/100;
}

int tongChan(int n) {
	int res = 0;
	for (int i = 1; i <= n; i++)
		if (i % 6 == 0) 
			res += i;
	return res;
}

float f1(float x, int n) {
	float res = 2016*pow(x, n);
	for (int i = 1; i <= n; i++)
		res += pow(x, i)/pow(3, i);
	return round(res*100)/100;
}

float f2(float x, int n) {
	if (n > 10) return 2016*x;
	float res = exp(x);
	for (int i = 1; i <= n; i++) 
		res += i;
	return round(res*100)/100;
}

int main() {
	float x, y;
	int n;
	nhap(x, y, n);
	cout << "Dien tich hinh chu nhat = " << dienTich(x, y) << endl;
	cout << "Tong chan chia het cho 3 [1, " << n << "] = " << tongChan(n) << endl;
	cout << "F1(" << x <<", " << n << ") = " << f1(x, n) << endl;
	cout << "F2(" << x <<", " << n << ") = " << f2(x, n) << endl;
	return 0;
}


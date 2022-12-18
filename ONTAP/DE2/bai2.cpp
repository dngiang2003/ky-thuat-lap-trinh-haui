#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

void nhapN(int &n) {
	cout << "Nhap n = ";
	cin >> n;
	while (n <= 0) {
		cout << "Nhap lai n = ";
		cin >> n;
	}
}

void nhapM(int *a, int n) {
	cout << "Nhap mang" << endl;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void inMang(int *a, int n) {
	cout << "Mang hien tai la: " << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

void taoFile(char *k, int *a, int n) {
	ofstream f(k, ios::out);
	for (int i = 0; i < n; i++)
		f << a[i] << " ";
	f << endl;
	cout << "Tao file thanh cong !" << endl;
}

void sapXep(int *a, int n) {
	for (int i = 0; i < n - 1; i++)
		for (int j = i; j < n; j++)
			if (a[i] > a[j])
				swap(a[i], a[j]);
}

void chenFile(char *k, int *a, int n) {
	ofstream f(k, ios::app);
	for (int i = 0; i < n; i++)
		f << a[i] << " ";
	cout << "Chen file thanh cong!" << endl;
}

void leChan(int *a, int n) {
	int dem = 0;
	float tong = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0 && (i + 1) % 2 == 0) {
			dem += 1;
			tong += a[i];
		}
	if (dem) {
		cout << "Trung binh cong = " << round((tong / dem) * 1000) / 1000 << endl;
	} else  {
		cout << "Mang tren khong co phan tu nao thoa man!" << endl;
	}
}

int tong(int *a, int k) {
	int res = 0;
	for (int i = 0; i < k; i++)
		res += a[i];
	return res;
}

int check(int *a, int n) {
	int i = 0;
	while (tong(a, n - i) >= 100) {
		i += 1;
	}
	return i;
}

int main() {
	int n;
	nhapN(n);
	// cap phat dong
	int *a = new int[n];
	nhapM(a, n);
	inMang(a, n);
	taoFile("ABC2005.TXT", a, n);
	sapXep(a, n);
	chenFile("ABC2005.TXT", a, n);
	leChan(a, n);
	inMang(a, n);
	cout << "So phan tu can bo ra la: " << check(a, n);
	delete[] a;
	return 0;
}


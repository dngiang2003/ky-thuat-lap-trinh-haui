#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

void nhapN(int &n) {
	cout << "Nhap so phan tu N = ";
	cin >> n;
	while (n <= 0) {
		cout << "Nhap lai N = ";
		cin >> n;
	}
}

void nhapMang(int *a, int n) {
	cout << "Nhap cac phan tu cua mang!" << endl;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void inMang(int *a, int n) {
	cout << "Mang hien tai la: " << endl;
	for (int i = 0; i < n; i++) cout << a[i] << "  ";
	cout << endl;
}

void taoFile(char *k, int *a, int n) {
	ofstream f(k, ios::out);
	for (int i = 0; i < n; i++)
		f << a[i] << " ";
}

void sapXep(char *k, int *a, int n) {
	// sap xep mang
	for (int i = 0; i < n - 1; i++) {
		for (int j = i; j < n; j++)
			if (a[i] > a[j])
				swap(a[i], a[j]);
	}
	// ghi tiep noi dung
	ofstream f(k, ios::app);
	f << endl;
	for (int i = 0; i < n; i++)
		f << a[i] << " ";
}

void check(int *a, int n) {
	int x, tong = 0, dem = 0;
	cout << "Nhap so x = ";
	cin >> x;
	for (int i = 0; i < n; i++)
		if (abs(a[i]) < x) {
			tong += a[i];
			dem += 1;
		}
	if (dem) {
		cout << "Cac phan tu co abs nho hon " << x << " la: ";
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl << "Tong cua chung = " << tong;
	} else {
		cout << "Mang tren khong co phan tu nao thoa man!";
	}
}

int main() {
	int n;
	nhapN(n);
	int *a = new int[n];
	nhapMang(a, n);
	inMang(a, n);
	taoFile("ABC2015.TXT", a, n);
	cout << "Tao file thanh cong!" << endl;
	sapXep("ABC2015.TXT", a, n);
	cout << "Sap xep mang thanh cong!" << endl;
	check(a, n);
	return 0;
}

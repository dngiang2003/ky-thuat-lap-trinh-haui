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

void nhapM(int *&a, int n) {
	a = new int[n];
	cout << "Nhap mang: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i <<"] = ";
		cin >> a[i];
	}
}

void hienThi(int *a, int n) {
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
	f.close();
	cout << "Tao file thanh cong!" << endl;
}

void sapXepGiam(int *a, int n) {
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
				swap(a[i], a[j]);
	cout << "Da sap xep giam dan!" << endl;
}

void chenFile(char *k, int *a, int n) {
	ofstream f(k, ios::app);
	for (int i = 0; i < n; i++)
		f << a[i] << " ";
	cout << "Chen file thanh cong !" << endl;
}

bool check(int *a, int n) {
	for (int i = 0; i < n; i++)
		if (a[i] < 8) return false;
	return true;
}

void check8(int *a, int n) {
	if (check(a, n)) {
		cout << "Mang tren gom toan cac phan tu lon hon 8 !" << endl;
	} else {
		cout << "Mang tren co phan tu nho hon 8 !" << endl;
	}
}

void xoa(int *&a, int &n, int index) {
	for (int i = index; i < n - 1 ; i++)
		a[i] = a[i + 1];
	n--;
	int *b = new int[n];
    for (int i = 0; i < n; i++)
        b[i] = a[i];
    delete a;
    a = b;
}


void xoaAm(int *&a, int &n) {
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			xoa(a, n, i);
	cout << "Mang sau khi xoa phan tu am la: " << endl;
	hienThi(a, n);
	cout << "n = " << n;
}

int main() {
	int n;
	int *a;
	nhapN(n);
	nhapM(a, n);
	hienThi(a, n);
	taoFile("ABC2014.TXT", a, n);
	sapXepGiam(a, n);
	hienThi(a, n);
	chenFile("ABC2014.TXT", a, n);
	check8(a, n);
	xoaAm(a, n);
	return 0;
}


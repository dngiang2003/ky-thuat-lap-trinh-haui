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
	cout << "Nhap cac phan tu: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
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
	cout << "Tao file thanh cong !" << endl;
}

void sapXep(int *a, int n) {
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
				swap(a[i], a[j]);
}

void chenFile(char *k, int *a, int n) {
	ofstream f(k, ios::app);
	for (int i = 0; i < n; i++)
		f << a[i] << " ";
	cout << "Chen file thanh cong !" << endl;
}

void chanX(int *a, int n) {
	int x, dem = 0;
	cout << "Nhap x = ";
	cin >> x;
	for (int i = 0; i < n; i++)
		if (a[i] % (2 * x) == 0)
			dem += 1;
	if (dem) {
		cout << "Mang co " << dem << " phan tu thoa man!" << endl;
	} else {
		cout << "Mang tren khong co phan tu nao thoa man!" << endl;
	}
}

bool check(int *a, int n) {
	if (n == 1) return true;
	for (int i = 0; i < n - 1; i++)
		for (int j = i+1; j < n; j++)
			if (a[i] >= a[j])
				return false;
	return true;
}

void hopLe(int *a, int n) {
	if (check(a, n)) {
		cout << "Mang tren hop le!" << endl;
	} else {
		cout << "Mang tren khong hop le!" << endl;
	}
}

int main() {
	int n;
	nhapN(n);
	int *a = new int[n];
	nhapM(a, n);
	taoFile("ABC2003.TXT", a, n);
	sapXep(a, n);
	chenFile("ABC2003.TXT", a, n);
	chanX(a, n);
	hopLe(a, n);
	return 0;
}


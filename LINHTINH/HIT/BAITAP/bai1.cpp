#include <iostream>

using namespace std;

int main() {
	int gio;
	long long thucLinh, thuong, phat, mucLuong;
	cout << "Nhap so gio lam viec = ";
	cin >> gio;
	cout << "Nhap muc luong theo gio = ";
	cin >> mucLuong;
	cout << "Nhap tien thuong = ";
	cin >> thuong;
	cout << "Nhap tien phat = ";
	cin >> phat;
	thucLinh = gio * mucLuong + thuong - phat;
	cout << "So tien thuc linh = " << thucLinh;
	return 0;
}


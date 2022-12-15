#include <iostream>

using namespace std;

// Nhap 2 so nguyen duong a, b
void nhap(int &a, int &b) {
	do {
		cout << "Nhap a, b: ";
		cin >> a >> b;
	} while (a <= 0 || b <= 0);
}

// Tim UCLN cua 2 so nguyen duong bat ky
int ucln(int a, int b) {
	// Buoc 1: Neu a < b -> Doi cho a va b
	if (a < b) {
		int tg = a;
		a = b;
		b = tg;
	}
	// Buoc 2: Tinh r
	int r = a % b;
	// Buoc 3: Kiem tra r khac 0
	while (r != 0) {
		// Buoc 4
		a = b;
		b = r;
		r = a % b;
		// Quay lai buoc 3
	}
	// Buoc 5
	return b;
}

int main() {
	int a, b;
	nhap(a, b);
	cout << "UCLN(" << a << ", " << b << ") = " << ucln(a, b);
	return 0;
}

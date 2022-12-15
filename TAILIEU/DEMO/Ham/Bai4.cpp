#include <iostream>

using namespace std;

// Nhap so nguyen duong n
void nhap(int &n) {
	do {
		cout << "Nhap so nguyen duong: ";
		cin >> n;
	} while (n <= 0);
}

// Ham tinh so chu so cua n (vong lap)
int soChuSo_C1(int n) {
	int i = 0;
	while (n != 0) {
		n /= 10;
		i++;
	}
	return i;
}

// Ham tinh so chu so cua n (de quy)
int soChuSo_C2(int n) {
	if (n == 0) return 0;
	return soChuSo_C2(n / 10) + 1;
}

int main() {
	int n;
	nhap(n);
	cout << "So chu so cua n (dung vong lap): " << soChuSo_C1(n) << endl;
	cout << "So chu so cua n (dung de quy): " << soChuSo_C2(n);
	return 0;
}

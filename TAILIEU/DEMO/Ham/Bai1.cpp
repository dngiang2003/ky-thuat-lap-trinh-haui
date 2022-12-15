#include <iostream>

using namespace std;

// Nhap so nguyen duong n
void nhap(int &n, char c) {
	do {
		cout << "Nhap so nguyen duong " << c << ": ";
		cin >> n;
	} while(n <= 0);
}

// Tinh k giai thua
int giaiThua(int k) {
	if (k == 0) return 1;
	int gt = 1;
	for (int i = 1; i <= k; i++) {
		gt *= i;
	}
	return gt;
}

// Tinh to hop chap k cua n
int C(int k, int n) {
	return giaiThua(n) / (giaiThua(k) * giaiThua(n - k));
}

int main() {
	int k, n;
	nhap(k, 'k');
	nhap(n, 'n');
	cout << "To hop chap k cua n: " << C(k, n);
	return 0;
}

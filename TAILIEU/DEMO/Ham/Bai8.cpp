#include <iostream>

using namespace std;

// Ham nhap so nguyen duong n > 10
void nhap(int &n) {
	do {
		cout << "Nhap so nguyen duong: ";
		cin >> n;
	} while (n <= 10);
}

// Ham phan tich n thanh thua so nguyen to
void phanTichTsnt(int n) {
	int dem;
	for (int i = 2; i <= n; i++) {
        dem = 0;
        while (n % i == 0) {
            dem++;
            n /= i;
        }
        if (dem) {
            cout << i;
            if (dem > 1) cout << "^" << dem;
            if (n > i) {
                cout << " * ";
            }
        }
    }
}
 
int main() {
	int n;
	nhap(n);
	phanTichTsnt(n);
	return 0;
}

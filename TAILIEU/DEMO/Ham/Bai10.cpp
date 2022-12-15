#include <iostream>

using namespace std;

int nguoiDuaThu(int n) {
	if (n <= 0) return 0;
	int d = 0;
	do {
		n /= 2;
		d++;
	} while (n > 0);
	return d;
}

int nguoiDuaThuDQ(int n) {
	if (n == 0) return 0;
	return nguoiDuaThuDQ(n / 2) + 1;
}

int main() {
	int n = 100;
	cout << "De giao" << n << "buc thu can " << nguoiDuaThu(n) << "ngay" << endl;
	cout << "De giao" << n << "buc thu can " << nguoiDuaThuDQ(n) << "ngay";
	return 0;
}

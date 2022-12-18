#include <iostream>
#include <math.h>

using namespace std;

int scs(int n) {
	int dem = 0;
	while (n % 10 != 0) {
		n /= 10;
		dem++;
	}
	return dem;
}

int tongscs(int n) {
	int tong;
	while (n % 10 != 0) {
		tong += n % 10;
		n /= 10;
	}
	return tong;
}

int main() {
	cout << scs(746);
	cout << endl << tongscs(746);
	return 0;
}


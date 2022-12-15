#include <iostream>

using namespace std;

void nhiphan(int n) {
	int bin = 0, p = 1;
	while (n > 0) {
		bin += (n % 2) * p;
		p *= 10;
		n /= 2;
	}
	cout << bin;
}

void nhiphan_dq(int n) {
	if (n == 0) return; 
	nhiphan_dq(n / 2);
	cout << n % 2;
}

int main() {
	int n = 33;
	cout << "Ma nhi phan cua " << n << " la: ";
	nhiphan(n);
	cout << endl << "Ma nhi phan cua " << n << " (de quy) la: ";
	nhiphan_dq(n);
	return 0;
}

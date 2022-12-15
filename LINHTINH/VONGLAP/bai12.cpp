#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n = 0;
	int tong = 0;
	while (tong<=1000) {
		tong += n;
		n++;
	}
	cout << "Ket qua n = " << n;
	return 0;
}



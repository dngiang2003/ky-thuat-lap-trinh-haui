#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
	int n, m;
	cout << "Nhap so dong n = "; cin >> n;
	cout << "Nhap so cot m = "; cin >> m;
	float a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "A[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
	cout << "Ma tran vua nhap la: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(5) << left << a[i][j];
		}
		cout << endl;
	}
	return 0;
}


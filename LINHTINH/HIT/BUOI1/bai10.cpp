#include <iostream>
#include <math.h>

using namespace std;

int tongle(int a[], int n) {
	int tong = 0;
	for(int i=0; i<n; i++) {
		if (a[i]%2!=0) tong += a[i];
	}
	return tong;
}
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	cout << tongle(a, n);
	return 0;
}

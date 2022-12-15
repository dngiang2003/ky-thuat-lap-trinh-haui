#include <iostream>

using namespace std;

int main() {
	int n, i;
	cin >> n;
	int a[n];
	a[0] = 1;
	a[1] = 1;
	for (i=2; i<n; i++) {
		a[i] = a[i-1] + a[i-2];
	}
	for (i=0; i<n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}

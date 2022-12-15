#include <iostream>
#include <math.h>

using namespace std;

bool snt(int n) {
	if (n<2) return false;
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i==0) return false;
	}
	return true;
}

bool check(int n) {
	int count = 0;
	for (int i=1; i<=n; i++) {
		if (n%i==0) count++;
	}
	if (snt(count)) return true;
	return false;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	int dem = 0;
	for (int i=0; i<n; i++) {
		if (check(a[i])) dem++;
	}
	cout << dem;
	return 0;
}

#include <iostream>
#include <math.h>

using namespace std;

bool check(int a[], int n, int k) {
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (k==a[i]+a[j]) return true;
		}
	}
	return false;
}

int main() {
	int n;
	int a[n];
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	int k;
	cin >> k;
	if (check(a, n, k)) {
		cout <<"YES";
	} else {
		cout << "NO";
	}
	return 0;
}

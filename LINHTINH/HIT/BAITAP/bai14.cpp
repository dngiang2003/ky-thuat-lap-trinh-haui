#include <iostream>
#include <math.h>

using namespace std;

void tangdan(int a[], int n) {
	int temp;
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (a[i]>a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	int k;
	cin >> k;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	tangdan(a, n);
	for (int i=0; i<k; i++) {
		for (int j=0; j<n; j++) {
			if (a[j]%k==i) {
				cout << a[j]<< " ";
			}
		}
	}
	return 0;
}



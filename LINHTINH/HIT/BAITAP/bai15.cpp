#include <iostream>
#include <math.h>

using namespace std;

void inmang(int a[], int n) {
	cout <<"\nMang: ";
	for (int i=0; i<n; i++) {
		cout <<a[i]<<" ";
	}
}


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

void giamdan(int a[], int n) {
	int temp;
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (a[i]<a[j]) {
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
	int a[n] = {};
	int b[n][n] = {};
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	inmang(a, n);
	tangdan(a, n);
	inmang(a, n);
	
	// tang dan mang theo so chu so
	// gian dan theo gia tri
	return 0;
}



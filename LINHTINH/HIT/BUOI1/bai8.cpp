#include <iostream>
#include <math.h>

using namespace std;

int timMax(int a[], int n) {
	int res = a[0];
	for (int i=1; i<n; i++) {
		if (a[i]>res) res = a[i]; 
	}
	return res;
}

int demMax(int a[], int n, int res) {
	int dem = 0;
	for (int i=0; i<n; i++) {
		if (res==a[i]) dem++;
	}
	return dem;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	cout <<demMax(a, n, timMax(a, n));
	return 0;
}


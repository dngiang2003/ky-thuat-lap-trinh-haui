#include <iostream>
#include <math.h>

using namespace std;

int Scs(int n) {
	int dem = 0;
	while (n!=0) {
		n/=10;
		dem++;
	}
	return dem;
}

void Swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
// sapxep giam dan
void sapxep(int a[], int n) {
	int i, j;
	for (i=0; i<n-1; i++) {
		for (j=i+1; j<n; j++) {
			if (a[i]<a[j]) {
				Swap(a[i], a[j]);
			}
		}
	}
}
// sapxep tang dan theo so chu so
void sapxepCs(int a[], int n) {
	int i, j;
	for (i=0; i<n-1; i++) {
		for (j=i+1; j<n; j++) {
			if (Scs(a[i])>Scs(a[j])) {
				Swap(a[i], a[j]);
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	sapxep(a, n);
	sapxepCs(a, n);
//	cout <<"Mang sau khi sap xep: ";
	for (int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}

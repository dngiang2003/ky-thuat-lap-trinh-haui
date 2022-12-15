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

// sapxep tang dan theo so chu so
void sapxepCs(int a[], int n) {
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if (Scs(a[i])>Scs(a[j])) {
				Swap(a[i], a[j]);
			}
			if (Scs(a[i])==Scs(a[j])) {
				if (a[i]<a[j]) {
					Swap(a[i], a[j]);
				}
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
	sapxepCs(a, n);
	for (int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}

// cau 1 doi chuan ieed 32 64 bit
// cau 2 doi -12 qua he 16 bù 2
// cau 3 + - * 2 so he 16





#include <iostream>
#include <math.h>

using namespace std;

int Swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void sapxep(int a[], int n) {
	int i, j;
	for (i=0; i<n-1; i++) {
		for (j=i+1; j<n; j++) {
			if (a[i]>a[j]) {
				Swap(a[i], a[j]);
			}
		}
	} 
}
int main() {
	int n;
	cin >> n;
	int a[100];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	sapxep(a, n);
	cout <<"Mang sau khi sap xep: ";
	for (int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}


#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n;
	cout << "Nhap so phan tu cua mang n = ";
	cin >> n;
	while (n <= 0) {
		cout << "Nhap lai n = ";
		cin >> n;
	}
	// khai bao mang + nhap mang
	int a[n];
	for (int i = 0; i < n; i++) {
		cout << "A[" << i << "] = ";
		cin >> a[i];
	}
	// sap xep mang tang dan
	for (int i = 0; i < n - 1; i++) {
		for (int j = i; j < n; j++) {
			if (a[i] > a[j])
				swap(a[i], a[j]);
		}
	}
	// in mang sau khi sap xep
	cout << "Mang sau khi sap xep la: " << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << "  ";
	}
	cout << endl;
	// dem so phan tu trong doan [10, 20]
	int dem = 0;
	for (int i = 0; i < n ;i++)
		if (a[i] >= 10 && a[i] <= 20)
			dem++;
	cout << "Mang tren co " << dem << " phan tu trong doan [10, 20]";
	cout << endl;
	// kiem tra 3 so chan lien tiep
	bool check = false;
	for (int i = 0; i < n-2; i++)
		if (a[i] % 2 == 0 && a[i+1] % 2 ==0 && a[i+2] % 2==0) {
			check = true;
			break;
		}
	if (check) {
		cout << "Mang a ton tai 3 so chan lien tiep";
	} else {
		cout << "Mang a khong ton tai 3 so chan lien tiep";
	}
	return 0;
}


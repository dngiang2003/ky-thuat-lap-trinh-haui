#include <iostream>
#include <math.h>

using namespace std;

void nhap(int *&a, int &n) {
	cout << "Nhap so phan tu n = ";
	cin >> n;
	while (n<5 || n>30) {
		cout << "Nhap lai n = ";
		cin >> n;
	}
	a = new int[n];
	for (int i=0; i<n; i++) {
		cout << "a[" << i << "] = ";
		cin >> *(a+i);
	}
}

void hienThi(int *a, int n) {
	for (int i=0; i<n; i++) cout << *(a+i) << "  ";
	cout << endl;
}

void chen(int *&a, int &n) {
	int x, k;
	cout << "Nhap gia tri can chen x = ";
	cin >> x;
	cout << "Nhap vi tri can chen k = ";
	cin >> k;
	while (k<=0 || k>n) {
		cout << "Nhap lai vi tri can chen k = ";
		cin >> k;
	}
	// khoi tao mang b
	int *b = new int[n+1];
	
	// gan mang a cho mang b
	for (int i=0; i<n; i++) *(b+i) = *(a+i);
	
	// giai phong mang a
	delete a;
	
	// chen x vao b
	for (int i=n; i>=k; i--) *(b+i+1) = *(b+i);
	b[k] = x;
	n++;
	
	// tro lai a vao b
	a = b;
}

void sapXep(int *&a, int n, int mode) {
	// 1 la tang dan -1 la gian dam
	if (mode!=1&&mode!=-1) mode = 1;
	for (int i=0; i<n-1; i++) {
		for (int j=i; j<n; j++) {
			if (*(a+i)*mode > *(a+j)*mode)
				swap(*(a+i), *(a+j));
		}
	}
}

void xoa(int *&a, int &n) {
	int k;
	cout << "Nhap vi tri can xoa k = ";
	cin >> k;
	while (k<=0||k>n) {
		cout << "Nhap lai vi tri can xoa k = ";
		cin >> k;
	}
	for (int i=k-1; i<n; i++) *(a+i) = *(a+i+1);
	n--;
}

int main() {
	int n, *ptr;
	nhap(ptr, n);
	cout << "Mang vua nhap la: ";
	hienThi(ptr, n);
	chen(ptr, n);
	cout << "Mang sau khi chen la: ";
	hienThi(ptr, n);
	sapXep(ptr, n, -1);
	cout << "Mang sau khi sap xep la: ";
	hienThi(ptr, n);
	xoa(ptr, n);
	cout << "Mang sau xoa la: ";
	hienThi(ptr, n);
	return 0;
}


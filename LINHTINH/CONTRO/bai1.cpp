#include <iostream>
#include <math.h>

using namespace std;

void nhap(int *&a, int &n) {
	cout << "Nhap n = ";
	cin >> n;
	while (n<=0 || n>=30) {
		cout << "Nhap lai n = ";
		cin >> n;
	}
	// cap phat bo nho
	a = new int[n];
	for (int i=0; i<n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void hienThi(int *a, int n) {
	for (int i=0; i<n; i++) cout << *(a+i) << " ";
	cout << endl;
}

void chen(int *&a, int &n) {
	// chen so x vao vi tri thu k
	int x, k;
	cout << "Nhap vi tri can tren k = ";
	cin >> k;
	while (k<=0 || k>n) {
		cout << "Nhap lai k = ";
		cin >> k;
	}
	cout << "Nhap gia tri can tren x = ";
	cin >> x;
	
	int *b = new int[n+1];
	// chuyen mang a sang mang b
	for (int i=0; i<n; i++) b[i] = a[i];
	
	// xoa du lieu mang a
	delete(a);
	
	// tien hanh chen
	for (int i=n; i>=k; i--) b[i+1] = b[i];
	b[k] = x;
	n++;
	// tro lai mang a vao mang b
	a = b;
}

void sapXepTang(int *&a, int n) {
	for (int i=0; i<n-1; i++) {
		for (int j=i; j<n; j++) {
			if (*(a+i)>*(a+j)) {
				swap(*(a+i),*(a+j));
			}
		}
	}
}

void giaiphong(int *a) {
	delete a;
	cout << "Da giai phong bo nho cap phat dong!" << endl;
}


int main() {
	int n;
	int *ptr;
	nhap(ptr, n);
	cout << "Mang vua nhap la : ";
	hienThi(ptr, n);
	chen(ptr, n);
	cout << "Mang sau khi chen la : ";
	hienThi(ptr, n);
	sapXepTang(ptr, n);
	cout << "Mang sau khi sap xep tang la : ";
	hienThi(ptr, n);
	giaiphong(ptr);
	hienThi(ptr, n);
	return 0;
}


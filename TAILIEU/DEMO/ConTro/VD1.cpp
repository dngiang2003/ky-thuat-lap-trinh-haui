#include <iostream>
#include <malloc.h>

using namespace std;

void nhap(int *&a, int &n) {
	do {
		cout << "Nhap so nguyen duong n trong khoang [5, 30]: ";
		cin >> n;
	} while (n < 5 || n > 30);
	
	cout << "Nhap day so gom " << n << " so nguyen" << endl;
	
//    a = new int[n];
	a = (int *) malloc(n * sizeof(int));
	
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
}


void hienthi(int *a, int n) {
	cout << "Hien thi day so: ";
	for (int i = 0; i < n; i++) {
        cout << a[i] << '\t';
    }
    cout << endl;
}

void chen_malloc(int *a, int &n) {
	int x, k;
	do {
		cout << "Nhap so muon chen: "; cin >> x;
		cout << "vao vi tri: "; cin >> k;
	} while(k < 1 || k > n);
	
	a = (int *) realloc(a, (n + 1) * sizeof(int));
	
	for (int i = n; i >= k; i--) {
        a[i + 1] = a[i];
    }
    a[k] = x;
    n++;
}


void chen_new(int *&a, int &n) {
	int x, k;
	do {
		cout << "Nhap so muon chen: "; cin >> x;
		cout << "vao vi tri: "; cin >> k;
	} while(k < 1 || k > n);
	
	// Tao mang dc tro boi b gom n + 1 phan tu. Sao chep du lieu tu a sang b. Giai phong a.
	int *b = new int[n + 1];
	for (int i = 0; i < n; i++) {
		b[i] = a[i];
	}
	delete a;
	
	// Chen
	for (int i = n; i >= k; i--) {
        b[i + 1] = b[i];
    }
    b[k] = x;
    n++;
    
    //Lien ket con tro a voi vung nho dc tro boi b
    a = b;
}

void sapxeptang(int *a, int n) {
	for (int i = 1; i < n; i++)
		for (int j = n - 1; j >= i; j--)
			if (*(a + j) < *(a + j - 1)) {
				int tg = *(a + j);
				*(a + j) = *(a + j - 1);
				*(a + j - 1) = tg;
			}
	cout << "Day da duoc sap xep tang dan!" << endl;
}

void giaiphong(int *a) {
	free(a);
//	delete a;
	cout << "Da giai phong bo nho cap phat dong!" << endl;
}

int main() {
	int n, *d;
	nhap(d, n);
	hienthi(d, n);
	
	//chen_new(d, n);
	chen_malloc(d, n);
	hienthi(d, n);
	
	sapxeptang(d, n);
	hienthi(d, n);
	
	giaiphong(d);
	// Hien thi day sau khi giai phong
	hienthi(d, n);
	return 0;	
}

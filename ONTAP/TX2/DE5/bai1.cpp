#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

void taoFile(char *k, int n) {
	ofstream f(k, ios::out);
	f << n << endl;
	for (int i = 0; i < n; i++)
		f << rand() % 50 << " ";
	f.close();
}

void docFile(char *k, int *&a, int &n) {
	ifstream f(k, ios::in);
	char s[255];
	f >> s;
	n = atoi(s);
	a = new int[n];
	for (int i = 0; i < n; i++) {
		f >> s;
		a[i] = atoi(s);
	}
	f.close();
}

void sapXepTang(int *&a, int n) {
	for (int i = 0; i < n - 1; i++)
		for (int j = i; j < n; j++)
			if (a[i] > a[j])
				swap(a[i], a[j]);
}

void hienThi(int *a, int n) {
	cout << "Mang hien tai la: " << endl;
	for (int i = 0; i < n; i++) 
		cout << a[i] << " ";
	cout << endl;
}

int tongscs(int n) {
	int tong = 0;
	while (n % 10 != 0) {
		tong += n % 10;
		n /= 10;
	}
	return tong;
}

int scs(int n) {
	int dem = 0;
	while (n % 10 != 0) {
		n /= 10;
		dem++;
	}
	return dem;
}

int tongscsM(int *a, int n) {
	int tongM = 0;
	for (int i = 0; i < n; i++)
		tongM += scs(a[i]);
	return tongM;
}


bool check(int *a, int n) {
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0 && a[i] >= 100)
			return false;
	return true;
}

void chen2022(int *&a, int &n) {
	int *b = new int [n + 1];
	for (int i = 0; i < n; i++)
		b[i] = a[i];
	delete a;
	
	for (int i = n; i >= 0; i--)
		b[i+1] = b[i];
	b[0] = 2022;
	n++;
	a = b;
} 

void ketNoi(char *k, int *a, int n) {
	ofstream f(k, ios::app);
	// in mang sau khi xu ly
	f << endl;
	for (int i = 0; i < n; i++)
		f << a[i] << " ";
	f << endl << tongscsM(a, n) << endl;
	f << check(a, n);
	f.close();
}

int main() {
	int n;
	int *a;
	taoFile("DATA.TXT", 10);
	docFile("DATA.TXT", a, n);
	sapXepTang(a, n);
	hienThi(a, n);
	chen2022(a, n);
	hienThi(a, n);
	ketNoi("DATA.TXT", a, n);
	return 0;
}

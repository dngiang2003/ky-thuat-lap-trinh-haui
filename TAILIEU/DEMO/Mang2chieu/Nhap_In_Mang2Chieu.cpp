#include <iostream>
#define ROW 100
#define COL 100

using namespace std;

void nhapMang(int b[][COL], int &m, int &n) {
	cout << "Nhap so dong : ";
	cin >> m;
	cout << "Nhap so cot : ";
	cin >> n;
	cout << "Nhap mang 2 chieu gom " << m << " hang, " << n << " cot:" << endl;
	for (int i = 0; i < m; i++) {
		cout << "Nhap dong thu " << i + 1 << endl;
		for (int j = 0; j < n; j++) {
			cout << "b[" << i << "][" << j << "]=";
			cin >> b[i][j];
		}
	}
}

void hienThiMang(int b[][COL], int m, int n) {
	cout << "Hien thi mang 2 chieu: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "\t" << b[i][j];
		}
		cout << endl << endl;
	}
}

int main()
{
	int b[ROW][COL]; 
	int m, n; 

	nhapMang(b, m, n);
	hienThiMang(b, m, n);

	return 0;
}

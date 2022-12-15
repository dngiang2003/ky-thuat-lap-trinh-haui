#include <iostream>
#define ROW 100
#define COL 100

using namespace std;

void nhapMaTran(float b[][COL], int &n) {
	cout << "Nhap n : ";
	cin >> n;
	cout << "Nhap ma tran vuong cap " << n << ":" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "b[" << i << "][" << j << "]=";
			cin >> b[i][j];
		}
	}
}

void hienThiMaTran(float b[][COL], int n) {
	cout << "Hien thi ma tran: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "\t" << b[i][j];
		}
		cout << endl << endl;
	}
}

float tongDuongCheoChinh(float b[][COL], int n) {
	float tong = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) tong = tong + b[i][j];
		}
	}
	
//	for (int i = 0; i < n; i++) {
//		tong = tong + b[i][i];
//	}
	return tong;
}

bool soChan(int a) {
	if (a % 2 == 0) return true;
	return false;
}

float tongHangChanCotLe(float b[][COL], int n) {
	float tong = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (soChan(i) && !soChan(j)) tong = tong + b[i][j];
		}
	}
	return tong;
}

bool maTranTamGiacTren(float b[][COL], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j && b[i][j] != 0) return false;
		}
	}
	return true;
}

int main()
{
	float b[ROW][COL]; 
	int n; 

	nhapMaTran(b, n);
	hienThiMaTran(b, n);
	cout << "Tong duong cheo chinh: " << tongDuongCheoChinh(b, n) << endl;
	cout << "Tong hang chan, cot le: " << tongHangChanCotLe(b, n) << endl;
	if (maTranTamGiacTren(b, n)) cout << "La ma tran tam giac tren" << endl;
	else cout << "Khong phai la ma tran tam giac tren" << endl;
	return 0;
}

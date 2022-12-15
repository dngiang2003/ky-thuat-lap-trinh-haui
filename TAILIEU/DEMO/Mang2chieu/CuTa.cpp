#include <iostream>
#define ROW 100
#define COL 100

using namespace std;

void nhap(int b[][COL], int &m, int &n) {
	cout << "Nhap so VDV: ";
	cin >> m;
	cout << "Nhap so lan cu ta: ";
	cin >> n;
	cout << "Nhap thanh tich cu ta cua " << m << " vdv sau " << n << " lan cu ta:" << endl;
	for (int i = 0; i < m; i++) {
		cout << "Van dong vien thu " << i + 1 << endl;
		for (int j = 0; j < n; j++) {
			cout << "Lan thu " << j + 1 << ": ";
			cin >> b[i][j];
		}
	}
}

void hienthi(int b[][COL], int m, int n) {
	cout << "Thanh tich cua cac van dong vien " << endl;
	for (int i = -1; i < m; i++) {
		if (i >= 0) cout << "VDV " << i + 1;
		for (int j = 0; j < n; j++) {
			if (i < 0) {
				cout << "\tLan " << j + 1;
			} else cout << "\t" << b[i][j] << "kg";
		}
		cout << endl;
	}
}

int kyluc(int b[][COL], int m, int n) {
	int mx = b[0][0];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (mx < b[i][j]) mx = b[i][j];
		}
	}
	return mx;
}

int vodich(int b[][COL], int m, int n) {
	int tmax = 0;
	int vd = 0;
	for (int i = 0; i < m; i++) {
		int tong = 0;
		for (int j = 0; j < n; j++) {
			tong = tong + b[i][j];
		}
		if (tmax < tong) {
			tmax = tong;
			vd = i;
		}
	}
	return vd + 1;
}

int main()
{
	int b[ROW][COL]; 
	int m, n; 

	nhap(b, m, n);
	hienthi(b, m, n);
	cout << "Ky luc: " << kyluc(b, m, n) << "kg" << endl;
	cout << "Nha vo dich la van dong vien so " << vodich(b, m, n) << endl;
	return 0;
}

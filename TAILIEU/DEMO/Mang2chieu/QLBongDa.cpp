#include <iostream>
#define ROW 100
#define COL 100

using namespace std;

void nhapMang(int b[][COL], int &n) {
	cout << "Nhap so doi bong: "; cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j) {
				cout << "Ty so Doi " << i + 1 << " - Doi " << j + 1 << ": ";
				cin >> b[i][j] >> b[j][i];
			}
		}
	}
}
void hienBangKQ(int b[][COL], int n) {
	cout << "Ty so cac tran dau: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			if (i < j)
				cout << "Doi" << i + 1 << " " << b[i][j] << " - " <<  b[j][i] << " Doi" << j + 1 << endl;
	}
}

void hienBangDiem(int b[][COL], int n) {
	cout << "\tDiem\tHieuso" << endl;
	for (int i = 0; i < n; i++) {
		int diem = 0;
		int hieuso = 0;
		for (int j = 0; j < n; j++) {
			if (i != j) {
				if (b[i][j] > b[j][i]) diem += 3;
				if (b[i][j] == b[j][i]) diem += 1;
				hieuso = hieuso + b[i][j] - b[j][i];
			}
		}
		cout << "Doi " << i + 1 << "\t" << diem << "\t" << hieuso << endl;
	}
}

int voDich(int b[][COL], int n) {
	int diem_max = 0;
	int hieuso_max = 0;
	int d = 0;
	for (int i = 0; i < n; i++) {
		int diem = 0;
		int hieuso = 0;
		for (int j = 0; j < n; j++) {
				if (b[i][j] > b[j][i]) diem += 3;
				if (b[i][j] == b[j][i]) diem += 1;
				hieuso = hieuso + b[i][j] - b[j][i];
		}
		if ((diem > diem_max) || (diem == diem_max && hieuso > hieuso_max)) {
			diem_max = diem;
			hieuso_max = hieuso;
			d = i;
		}
	}
	return d + 1;
}

int main()
{
	int b[ROW][COL]; 
	int n; 

	nhapMang(b, n);
	hienBangKQ(b,n);
	hienBangDiem(b, n);
	cout << "\nDoi vo dich la: Doi" << voDich(b, n);

	return 0;
}

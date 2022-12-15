#include <iostream>

using namespace std;

// Ham nhap vao so dien dau thang va cuoi thang
void nhap(int &dt, int &ct) {
	do {
		cout << "Nhap so dien dau thang va cuoi thang: ";
		cin >> dt >> ct;
	} while (dt <= 0 || ct <= 0 || dt >= ct);
}

// Ham tinh tien dien
long tinhTienDien(int dt, int ct) {
	int tienDien, soDien = ct - dt;
	if (soDien <= 100) 				// 100kWh dau tien, soDien <= 100
		tienDien = soDien * 1000;
	else if (soDien <= 200)			// 100kWh tiep theo, 100 < soDien <= 200
		tienDien = 100 * 1000 + (soDien - 100) * 1700;
	else 
		tienDien = 100 * 1000 + 100 * 1700 + (soDien - 200) * 3500;
	return tienDien;
}


int main() {
	int dt, ct;
	nhap(dt, ct);
	cout << "Tien dien: " << tinhTienDien(dt, ct) << "VND";
	return 0;
}

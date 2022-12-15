#include <iostream>
#include <math.h>

using namespace std;

// Nhap ban kinh hinh tron
void nhap(float &r) {
	do {
		cout << "Nhap ban kinh hinh tron (m): ";
		cin >> r;
	} while (r <= 0);
}

// Tinh chu vi, dien tich hinh tron
void hinhTron(float r, float &c, float &s) {
	c = r * 2 * M_PI;
	s = r * r * M_PI;
}

int main() {
	float r, c, s;
	char ans;
	do {
		nhap(r);
		hinhTron(r, c, s);
		cout << "Chu vi hinh tron: " << c << " m" << endl;
		cout << "Dien tich hinh tron: " << s << " m2" << endl;
		cout << "Tiep tuc tinh voi hinh tron khac. Y/N? ";
		cin >> ans;
	} while (ans == 'Y' || ans == 'y');
	// Lap lai voi hinh tron khac
	return 0;
}

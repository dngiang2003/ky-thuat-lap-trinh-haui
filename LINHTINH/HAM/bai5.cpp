#include <iostream>
#include <math.h>

using namespace std;

void nhap(float &dt, float &ct) {
	cout <<"Nhap chi so dau thang = ";
	cin >> dt;
	cout <<"Nhap chi so cuoi thang = ";
	cin >> ct;
	while (dt<0 || ct<0 || ct<dt) {
		cout <<"Nhap lai chi so dau thang = ";
		cin >> dt;
		cout <<"Nhap lai chi so cuoi thang = ";
		cin >> ct;
	}
}
long double tinhtien(float dt, float ct) {
	long double tien = 0;
	float sodien = ct - dt;
	if (sodien<=100) {
		tien = sodien*1000;
	} else if (sodien<=200) {
		tien = 100*1000 + (sodien-100)*1700;
	} else {
		tien = 100*1000 + 100*1700 + (sodien-200)*3500;
	}
	return tien;
}
int main() {
	float dt, ct;
	nhap(dt, ct);
	cout <<"So tien phai tra = "<<tinhtien(dt, ct)<<" vnd";
	return 0;
}



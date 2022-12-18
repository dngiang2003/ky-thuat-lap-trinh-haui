#include <iostream>
#include <math.h>

using namespace std;

void nhap(float &x, float &y) {
	cout << "Nhap toa do x = ";
	cin >> x;
	cout << "Nhap toa do y = ";
	cin >> y;
}

float d(float x1, float y1, float x2, float y2) {
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

float chuVi(float x1, float y1, float x2, float y2, float x3, float y3) {
	float d1 = d(x1, y1, x2, y2);
	float d2 = d(x1, y1, x3, y3);
	float d3 = d(x2, y2, x3, y3);
	if (d1 + d2 > d3 && d1 + d3 > d2 && d2 + d3 > d1) return 0;
	return round((d1 + d2 + d3) * 1000) / 1000;
}

int main() {
	float x1, y1, x2, y2, x3, y3;
	cout << "- Nhap toa do diem A: " << endl;
	nhap(x1, y1);
	cout << "- Nhap toa do diem B: " << endl;
	nhap(x2, y2);
	cout << "- Nhap toa do diem C: " << endl;
	nhap(x3, y3);
	float res = chuVi(x1, y1, x2, y2, x3, y3);
	if (res) {
		cout << "- Chu vi tam gia tren = " << chuVi(x1, y1, x2, y2, x3, y3);
	} else {
		cout << "- 3 diem tren khong the tao thanh 1 tam giac !";
	}
	return 0;
}


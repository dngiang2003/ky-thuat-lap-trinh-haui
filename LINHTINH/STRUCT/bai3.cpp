#include <iostream>
#include <math.h>

using namespace std;

struct tamgiac{
	float a, b, c;
	float chuvi, dientich;
};

void hienthi(tamgiac x) {
	cout << "Chu vi tam giac tren = " << x.chuvi;
	cout << endl;
	cout << "Dien tich tam giac tren = " << x.dientich;
}


int main() {
	tamgiac x;
	cout << "Nhap tam giac" << endl;
	cout << "Nhap canh a = ";
	cin >> x.a;
	cout << "Nhap canh b = ";
	cin >> x.b;
	cout << "Nhap canh c = ";
	cin >> x.c;
	x.chuvi = x.a+x.b+x.c;
	float p = x.chuvi/2.0;
	x.dientich = sqrt(p*(p-x.a)*(p-x.b)*(p-x.c));
	hienthi(x);
	return 0;
}


#include <iostream>
#include <math.h>

using namespace std;

struct SinhVien {
	string ten, diachi;
	int tuoi;
};

int main() {
	SinhVien x;
	x.ten = "Do Ngoc Giang";
	x.tuoi = 19;
	x.diachi = "Hai Duong";
	SinhVien *ptr = &x;
	cout << ptr->ten << endl;
	cout << (*ptr).diachi;
	return 0;
}


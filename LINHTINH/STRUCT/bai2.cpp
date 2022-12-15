#include <iostream>
#include <math.h>

using namespace std;

// ten, gpa, diachi, masv

struct ten_struct {
	//member
};

struct SinhVien {
	// thuoc tinh
	string masv;
	string ten;
	string dc;
	float gpa;
	// phuong thuc
	void in() {
		cout << masv <<" " << ten << " " << gpa << " " << dc;
	}
	// ham khoi tao constructor gia tri mac dinh
	SinhVien() {
		masv = "999";
		ten = "giang";
		gpa = 3.1;
		dc = "hai duong";
	}
};

int main() {
	SinhVien x;
	// khai bao truc tiep
	// SinhVien v{"123", "nhat", 3.1, "Hai duong"};
	cin >> x.masv;
	cin.ignore();
	getline(cin, x.ten);
	cin >> x.gpa;
	cin.ignore();
	getline(cin, x.dc);
	cout << x.masv << "  " << x.ten << "  " << x.gpa << "  " << x.dc;
	SinhVien y;
	y.in();
	return 0;
}


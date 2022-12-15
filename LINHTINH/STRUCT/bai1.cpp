#include <iostream>
#include <math.h>

using namespace std;

struct SinhVien {
	int maSV;
	string hoTen;
	int tuoi;
	float toan, li, hoa;
	float gpa;
};

void Nhap(SinhVien dsSV[], int n) {
	for (int i=0; i<n; i++) {
		cout << "Nhap sinh vien thu " << i << endl;
		cout << "Nhap Ma Sv = ";
		cin >> dsSV[i].maSV;
		fflush(stdin);
		cout << "Nhap Ten Sv = ";
		getline(cin, dsSV[i].hoTen);
		cout << "Nhap Tuoi Sv = ";
		cin >> dsSV[i].tuoi;
		cout << "Nhap diem toan = ";
		cin >> dsSV[i].toan;
		cout << "Nhap diem ly = ";
		cin >> dsSV[i].li;
		cout << "Nhap hoa = ";
		cin >> dsSV[i].hoa;
		dsSV[i].gpa = (dsSV[i].toan+dsSV[i].li+dsSV[i].hoa)/3.0;
	}
}

void Sapxep(SinhVien dsSV[], int n) {
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (dsSV[i].tuoi > dsSV[j].tuoi) {
				SinhVien temp;
				temp = dsSV[i];
				dsSV[i] = dsSV[j];
				dsSV[j] = temp;
			}
		}
	}
}

void Timmax(SinhVien dsSV[], int n) {
	float max = dsSV[0].gpa;
	int index = 0;
	for (int i=1; i<n; i++) {
		if (dsSV[i].gpa>max) {
			max = dsSV[i].gpa;
			index = i;
		}
	}
	cout << "Sinh vien diem trung binh cao nhat la: " << endl;
	cout << "Ma sinh vien = " << dsSV[index].maSV << endl;
	cout << "Ten sinh vien = " << dsSV[index].hoTen << endl;
	cout << "Tuoi sinh vien = " << dsSV[index].tuoi << endl;
	cout << "Diem trung binh = " << dsSV[index].gpa;
}

void Xuat(SinhVien dsSV[], int n) {
	for (int i=0; i<n ; i++) {
		cout << "Ma sinh vien = " << dsSV[i].maSV << endl;
		cout << "Ten sinh vien = " << dsSV[i].hoTen << endl;
		cout << "Tuoi sinh vien = " << dsSV[i].tuoi << endl;
	}
}


//struct SinhVien {
//	char hoTen[40];
//	char maSv[11];
//	char lop[10];
//};
//struct Book {
//	string title, author;
//	int pages;
//	float price;
//};

int main() {
	int n;
	cout << "Nhap so luong SV = ";
	cin >> n;
	SinhVien dsSV[n];
	Nhap(dsSV, n);
	Sapxep(dsSV, n);
	Xuat(dsSV, n);
	cout <<"---------" << endl;
	Timmax(dsSV, n);
//	Book a;
//	cout << "Nhap ten sach: ";
//	getline(cin, a.title);
//	cout << "Nhap ten tac gia: ";
//	getline(cin, a.author);
//	cout << "Nhap so trang = ";
//	cin >> a.pages;
//	cout << "Nhap gia tien = ";
//	cin >> a.price;
//	cout <<left<< setw(15) << "Ten sach" << setw(15) <<"Ten tac gia"<<setw(15)<<"So trang";
//	cout <<left<< setw(15) << a.title << setw(15) <<a.author<<setw(15)<<a.pages;
//	SinhVien giang;
//	strcpy(giang.hoTen, "Do Ngoc Giang");
//	strcpy(giang.maSv, "2021605122");
//	strcpy(giang.lop, "KTPM-03");
//	cout << "Ho ten: " << giang.hoTen << endl;
//	cout << "Ma Sv: " << giang.maSv << endl;
//	cout << "Lop: " << giang.lop;
	return 0;
}


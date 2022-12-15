#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct SinhVien {
    char hoten[30];
    char gioitinh[4];
    char hokhau[20];
    float diemtk;
};

void nhapSv(SinhVien *sp) {
    cout << "Ten sinh vien: ";
    fflush(stdin);
    gets(sp->hoten);
    cout << "Gioi tinh: ";
    fflush(stdin);
    gets(sp->gioitinh);
    cout << "Ho khau: ";
    fflush(stdin);
    gets(sp->hokhau);
    cout << "Diem tk: ";
    cin >> sp->diemtk;
}

void hienSv(SinhVien *sp) {
    cout << "Thong tin ve hoc sinh\n";
    cout << "- Ho ten:\t" << sp->hoten << endl;
    cout << "- Gioi tinh:\t" << sp->gioitinh << endl;
    cout << "- Ho khau:\t" << sp->hokhau << endl;
    cout << "- Diem TK:\t" << sp->diemtk;
}

int main() {
	// Khai bao truc tiep con tro cau truc
    // SinhVien *sp;

    // Khai bao thong qua kieu con tro cau truc
    typedef SinhVien *SPointer;
    SPointer sp;

    // Cap phat bo nho
    sp = new SinhVien;

    nhapSv(sp);
    hienSv(sp);
    getch();
    return 0;
}

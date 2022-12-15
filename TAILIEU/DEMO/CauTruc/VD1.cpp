#include <iostream>
#include <conio.h>
#include <stdio.h>

#define M 10
#define S 1150000

using namespace std;

struct CanBo {
    int macb;
    char hoten[30];
    char noisinh[50];
    int namsinh;
    float hsl;
};

void khoiTaoCb(CanBo &cb) {
    cout << "Ten can bo: ";
    fflush(stdin);
    gets(cb.hoten);
    cout << "Ma can bo: ";
    cin >> cb.macb;
    cout << "Nam sinh: ";
    cin >> cb.namsinh;
    cout << "He so luong: ";
    cin >> cb.hsl;
    cout << endl;
}

void hienThiCb(CanBo cb) {
    cout << "- Ho ten:\t" << cb.hoten << endl;
    cout << "- Ma can bo:\t" << cb.macb << endl;
    cout << "- Nam sinh:\t" << cb.namsinh << endl;
    cout.precision(2);
    cout << "- He so luong:\t" << fixed << cb.hsl << endl;
    cout.precision(0);
    cout << "- Luong: \t" << fixed << S * cb.hsl << endl;
    cout << "------------------------" << endl;
}

void khoiTaoDs(CanBo dscb[], int n) {
    for (int i = 0; i < n; i++)
        khoiTaoCb(dscb[i]);
}

void hienThiDs(CanBo dscb[], int n) {
    cout << "\nDanh sach can bo:" << endl;
    for (int i = 0; i < n; i++)
        hienThiCb(dscb[i]);
}

double tongLuong(CanBo dscb[], int n) {
	double luong = 0;
	for (int i = 0; i < n; i++)
        luong += S * dscb[i].hsl;
//        luong = luong + S * dscb[i].hsl;
    return luong;
}

void xoaCb(CanBo dscb[], int &n, int k) {
	for (int i = k; i < n; i++)
        dscb[i - 1] = dscb[i];
    n--;
}

int main() {
    int n = 5, k = 3;
//    CanBo dscb[M];
    CanBo *dscb = new CanBo[n];
    khoiTaoDs(dscb, n);
    hienThiDs(dscb, n);
    cout << "Tong luong: " << fixed << tongLuong(dscb, n);
    xoaCb(dscb, n, k);
    hienThiDs(dscb, n);
    return 0;
}

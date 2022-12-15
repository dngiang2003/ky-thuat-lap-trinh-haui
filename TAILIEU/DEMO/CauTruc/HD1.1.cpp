#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct NGAYTHANG {
    int ngay;
    int thang;
    int nam;
};
struct HOCSINH {
    char hoten[30];
    NGAYTHANG ngsinh;
    char gioitinh[4];
    char hokhau[20];
    float diemtb;
};

int main() {
//Khai bao và khoi tao du lieu cho bien cau truc
    HOCSINH hocsinh = {"Tran My Dung",
                       {20, 2, 1994},
                       "Nu",
                       "Lai Chau",
                       7.0};
//Hien thi thong tin ra man hinh
    cout << "Thong tin ve hoc sinh\n";
    cout << "\t" << hocsinh.hoten << endl;
    cout << "\t" << hocsinh.ngsinh.ngay;
    cout << "-" << hocsinh.ngsinh.thang;
    cout << "-" << hocsinh.ngsinh.nam << endl;
    cout << "\t" << hocsinh.gioitinh << endl;
    cout << "\t" << hocsinh.hokhau << endl;
    cout << "\t" << hocsinh.diemtb;
    getch();
    return 0;
}


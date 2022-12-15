#include <iostream>

using namespace std;

void NhapMang(int a[], int n) {
    cout << "Nhap mang " << n << " phan tu:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ":\t";
        cin >> a[i];
    }
}

void InMang(int a[], int n) {
    cout << "Danh sach cac phan tu cua mang:\t";
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int GiaTriMin(int a[], int n) {
    int m = a[0];
    for (int i = 0; i < n; i++) {
        if (m > a[i]) m = a[i];
    }
    return m;
}

float TbcSoAm(int a[], int n) {
    int tongam = 0;
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            tongam = tongam + a[i];
            dem++;
        }
    }
    if (dem > 0) { return (float) tongam / dem; }
    return 0;
}

void XoaPhanTu(int a[], int &n) {
    int k;
    do {
        cout << "Nhap k <= n: ";
        cin >> k;
    } while (k <= 0 || k > n);
    for (int i = k; i < n; i++) {
        a[i - 1] = a[i];
    }
    n--;
    cout << "* Phan tu thu " << k << " da bi xoa khoi mang" << endl;
}

void SapXepMang(int a[], int n) {
    if (a[0] == 1) return;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j]) { // Sap xep giam dan
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
    cout << "* Mang da duoc sap xep giam dan" << endl;
}

int main() {
    int n;
    do {
        cout << "Nhap n trong khoang [1, 30]: ";
        cin >> n;
    } while (n < 1 || n > 30);
    int a[30];
    NhapMang(a, n);
    InMang(a, n);
    cout << "Gia tri nho nhat trong mang la: " << GiaTriMin(a, n) << endl;
    float tbc = TbcSoAm(a, n);
    if (tbc != 0)
        cout << "Trung binh cong cac so am: " << TbcSoAm(a, n) << endl;
    else
        cout << "Khong co so am" << endl;
    XoaPhanTu(a, n);
    InMang(a, n);
    SapXepMang(a, n);
    InMang(a, n);
    return 0;
}

#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

void NhapChuoi(char *s) {
    cout << "Nhap chuoi: ";
    gets(s);
}

void DuyetChuoi(char *s) {
    int d1 = 0, d2 = 0, d3 = 0;
    for (int i = 0; i <= strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') d1++;
        else if (s[i] >= 'A' && s[i] <= 'Z') d2++;
        else if (s[i] >= '0' && s[i] <= '9') d3++;
    }
    cout << "So chu cai thuong: " << d1 << endl;
    cout << "So chu cai hoa: " << d2 << endl;
    cout << "So chu so: " << d3 << endl;
}

void TaoChuoi(char *s, char *s1) {
    strcpy(s1, s);
    strrev(s1);
    cout << "\nChuoi ban dau: " << s;
    cout << "\nChuoi moi: " << s1;
}

void ThayThe(char *str1, char *str2, char *str3) {
    char *s = strstr(str1, str2); // Con tro s tro den vi tri phan tu tim duoc str2 trong str1

    int d = strlen(str3) - strlen(str2); // Tinh do lech (d) so ky tu giua str3 va str2

    while (s) {
        // Neu str3 bang hoac nhieu ky tu hon str2
        if (d >= 0) {
            // Chen them (d) vi tri vao chuoi, tao ra vi tri trong chen str3
            for (int i = strlen(s) + d; i >= strlen(str3); i--)
                s[i] = s[i - d];
        }
            // Neu str3 it ky tu hon str2
        else {
            // Xoa di (d) ky tu trong chuoi, de du vi tri trong chen str3
            int i;
            for (i = strlen(str3); i < strlen(s) - abs(d); i++)
                s[i] = s[i + abs(d)];
            s[i] = '\0'; // Chen ky tu null vao cuoi chuoi sau khi xoa
        }

        // Chen str3 vao vi tri trong 
        for (int i = 0; i < strlen(str3); i++)
            s[i] = str3[i];

        s += strlen(str3); // Tang con tro den vi tri sau khi chen str3

        s = strstr(s, str2); // Tiep tuc tim str2 trong s
    }
}

void ThayChuSo(char *s) {
    char t[2];
    for (int i = 0; i < strlen(s); i++) {
		t[0] = s[i];
        if (s[i] == '0') ThayThe(s, t, "khong");
        else if (s[i] == '1') ThayThe(s, t, "mot");
        else if (s[i] == '2') ThayThe(s, t, "hai");
        else if (s[i] == '3') ThayThe(s, t, "ba");
        else if (s[i] == '4') ThayThe(s, t, "bon");
        else if (s[i] == '5') ThayThe(s, t, "nam");
        else if (s[i] == '6') ThayThe(s, t, "sau");
        else if (s[i] == '7') ThayThe(s, t, "bay");
        else if (s[i] == '8') ThayThe(s, t, "tam");
        else if (s[i] == '9') ThayThe(s, t, "chin");
    }
    cout << "\nChuoi sau khi thay the: " << s;
}

int main() {
    char s[100], s1[100];
    NhapChuoi(s);
    DuyetChuoi(s);
    TaoChuoi(s, s1);
    ThayChuSo(s);
    return 0;
}

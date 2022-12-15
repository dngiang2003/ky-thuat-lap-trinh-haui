#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int XuatHien(char *str1, char *str2) {
    int d = 0;
    char *s = strstr(str1, str2);
    while (s) {
        d++;
        s += strlen(str2);
        s = strstr(s, str2);
    }
    return d;
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

int main() {
    char str1[100], str2[100], str3[100];
    cout << "Nhap chuoi thu 1: ";
    fflush(stdin);
    gets(str1);
    cout << "Nhap chuoi thu 2: ";
    fflush(stdin);
    gets(str2);
    cout << "Nhap chuoi thu 3: ";
    fflush(stdin);
    gets(str3);
    cout << "So lan xuat hien cua \"" << str2 << "\" trong \"" << str1 << "\" la: " << XuatHien(str1, str2) << " lan";
    ThayThe(str1, str2, str3);
    cout << endl << "Chuoi sau khi thay the: " << str1;
    return 0;
}

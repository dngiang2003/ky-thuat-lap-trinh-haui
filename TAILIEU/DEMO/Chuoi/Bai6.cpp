#include <iostream>
#include <string.h>

using namespace std;

void Xoa(char *s, int k) {
    int i;
    for (i = k; i < strlen(s) - 1; i++)
        s[i] = s[i + 1];
    s[i] = '\0';
}

void Chen(char *s, char c, int k) {
    for (int i = strlen(s); i > k; i--)
        s[i] = s[i - 1];
    s[k] = c;
}

// Ham kiem tra ky tu
int KiemTra(char c) {
    if (c >= 'a' && c <= 'z' && c != '\0') return 1; // Tra ve 1 neu la in thuong
    if (c >= 'A' && c <= 'Z' && c != '\0') return 2; // Tra ve 2 neu la in hoa
    return 0;                                        // Tra ve 0 neu khong la chu cai
}

// Ham doi chu hoa thanh chu thuong (ko co kieu tra ve)
void InThuong(char &c) {
    if (KiemTra(c) == 2) c += ('a' - 'A');
}

// Ham doi chu thuong thanh chu hoa (co kieu tra ve)
void InHoa(char &c) {
    if (KiemTra(c) == 1) c -= ('a' - 'A');
}


void ChuanHoa(char *s) {
    // Loai bo khoang trang khong can thiet
    int i = 0;
    for (int i = 0; i < strlen(s); i++)
        if (s[i] == ' ' && s[i + 1] == ' ' || // 2 dau cach lien nhau
            s[i] == ' ' && s[i + 1] == '.' || // dau cach truoc dau cham
            s[i] == ' ' && s[i + 1] == ',')   // dau cach truoc dau phay
            Xoa(s, i--); // Xoa nhieu lan cho den khi chi con 1 dau cach tai vi tri i
    if (s[0] == ' ') Xoa(s, 0);
    if (s[strlen(s) - 1] == ' ') s[strlen(s) - 1] = '\0';

    // Chen them khoang trang sau dau . va ,
    for (int i = 1; i < strlen(s) - 1; i++) {
        if ((s[i] == '.' || s[i] == ',') && s[i + 1] != ' ')
            Chen(s, ' ', i + 1);
    }

    // Chuan hoa viet hoa, viet thuong
    for (int i = 2; i <= strlen(s); i++) {
        if (s[i - 2] == '.') InHoa(s[i]);
        else InThuong(s[i]);
    }
    InHoa(s[0]);
    InThuong(s[1];
}

int main() {
    char s[255];
    cout << "Nhap doan van ban:\n";
    fflush(stdin);
    gets(s);
    ChuanHoa(s);
    cout << "Van ban sau khi chuan hoa:\n\"" << s << "\"";
    return 0;
} 

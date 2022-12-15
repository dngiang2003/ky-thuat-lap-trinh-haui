#include <iostream>

using namespace std;

// Ham kiem tra ky tu
int kiemTra(char c) {
	if (c >= 'a' && c <= 'z') return 1; // Tra ve 1 neu la in thuong
	if (c >= 'A' && c <= 'Z') return 2; // Tra ve 2 neu la in hoa
	return 0;							// Tra ve 0 neu khong la chu cai
}

// Ham doi chu hoa thanh chu thuong (ko co kieu tra ve)
void hoaThuong(char &c) {
	c += 'a' - 'A';
}

// Ham doi chu thuong thanh chu hoa (co kieu tra ve)
char thuongHoa(char c) {
	return c - ('a' - 'A');
}

int main() {
	char c;
	cout << "Nhap mot ky tu: ";
	cin >> c;
	int kt = kiemTra(c);
	if (kt == 1) {
		cout << "Day la chu cai thuong" << endl;
		c = thuongHoa(c);
	}
	else if (kt == 2){
		cout << "Day la chu cai thuong" << endl;
		hoaThuong(c);
	}
	else cout << "Day khong phai la chu cai" << endl;
	cout << "Ky tu sau khi chuyen doi: " << c;
	return 0;
}

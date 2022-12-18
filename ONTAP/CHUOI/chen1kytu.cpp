#include <iostream>
#include <string.h>

using namespace std;

void chen(char *s, char c, int k) {
	if (k > 0 && k <= strlen(s)) {
		for (int i = strlen(s); i >= k; i--)
			s[i + 1] = s[i];
		s[k] = c;
		cout << "Chuoi sau khi chen la: " << s;
	} else {
		cout << "Khong the chen!";
	}
}

int main() {
	char s[100]; char c; int k;
	cout << "Nhap chuoi s = ";
	gets(s);
	cout << "Nhap ky tu can chen = ";
	fflush(stdin);
	cin >> c;
	cout << "Nhap vi tri can chen = ";
	cin >> k;
	chen(s, c, k);
	return 0;
}


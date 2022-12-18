#include <iostream>
#include <string.h>

using namespace std;

bool hopLe(char *s) {
	if (s[0] == ' ') return false;
	for (int i = 0; i < strlen(s) - 1; i++)
		if (s[i] == ' ' && s[i + 1] == ' ')
			return false;
	int d = 0;
	for (int i = 0; i < strlen(s); i++)
		if (s[i] == ' ' && s[i] != ' ')
			d += 1;
	return (d <= 10);
}

void check(char *s) {
	if (hopLe(s)) cout << "Chuoi tren hop le!";
	else cout << "Chuoi tren khong hop le!";
}

int main() {
	char s[100];
	cout << "Nhap chuoi s = ";
	gets(s);
	check(s);
	return 0;
}


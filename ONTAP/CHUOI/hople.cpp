#include <iostream>
#include <string.h>

using namespace std;

bool hopLe(char *s) {
	int d1 = 0, d2 = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == '(') d1++;
		if (s[i] == ')') d2++;
		if (d2 > d1) return false;
	}
	return (d1 == d2);
} 

int main() {
	char s[50];
	cout << "Nhap vao chuoi S = ";
	fflush(stdin);
	gets(s);
	if (hopLe(s)) {
		cout << "Chuoi ki tu tren hop le!";
	} else {
		cout << "Chuoi ki tu tren khong hop le!";
	}
	return 0;
}


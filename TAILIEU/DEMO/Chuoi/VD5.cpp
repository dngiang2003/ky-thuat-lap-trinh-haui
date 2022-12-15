#include <string.h>
#include <iostream>

using namespace std;

bool hople(char * s) {
	int d1 = 0, d2 = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == '(' ) d1++;
		if (s[i] == ')' ) d2++;
		if (d1 < d2) return false;
	}
//	if (d1 != d2) return false;
//	return true;
	return (d1 == d2);
}

int main() {
	char s[50];
	cout << "S="; gets(s);
	if (hople(s)) cout<< "Hop le";
	else cout << "Khong hop le";
	return 0;
}

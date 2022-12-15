#include <string.h>
#include <iostream>

using namespace std;

void chen(char* s, int k, char c) {
	if (k > 0 && k <= strlen(s)) {
		for (int i = strlen(s); i >= k; i--)
			s[i + 1] = s[i];
		s[k] = c;
	}
	else cout << "Vi tri khong hop le" << endl;
}

int main() {
	char s[80]; char c; int k;
	cout << "S="; gets(s);
	cout << "C="; cin >> c;
	cout << "K="; cin >> k;
	chen(s, k, c);
	cout << "Xau sau khi chen: " << s;
	return 0;
}

#include <iostream>
#include <string.h>

using namespace std;

int DemTu(char *s) {
	int d = 0;
	for (int i = 0; i < strlen(s) - 1; i++)
		if (s[i] == ' ' && s[i + 1] != ' ') d++;
	if (s[0] != ' ') d++;
	return d;
}

int main() {
	char s[1000];
	cout << "Nhap doan van:\n";
	fflush(stdin);
	gets(s);
	cout << "So luong tu trong doan van: " << DemTu(s) << " tu";
	return 0;
} 

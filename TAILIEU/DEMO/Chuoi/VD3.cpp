#include <string.h>
#include <iostream>

using namespace std;

bool hople(char * s) {
	int d1 = 0;
	for (int i = 0; i < strlen(s) - 1; i++)
		if (s[i] == ' ' && s[i + 1] == ' ') d1++;
					
	int d2 = 0;
	for (int i = 0; i < strlen(s) - 1; i++)
		if (s[i] == ' ' && s[i + 1] != ' ') d2++;
	if (s[0] != ' ') d2++;
	
	return (d1 == 0 && d2 <= 10);
}

int main() {
	char s[50]; 
	cout << "s="; gets(s);
	if (hople(s))
		cout << "Xau hop le";
	else
		cout << "Xau khong hop le";
	return 0;
}

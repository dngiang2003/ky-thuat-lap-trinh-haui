#include <string.h>
#include <iostream>

using namespace std;

int scct(char *s) {
	int d = 0;
	for (int i = 0; i < strlen(s); i++)
//		if (s[i] >= 97 && s[i] <= 122) d++;
		if (s[i] >= 'a' && s[i] <= 'z') d++;
	return d;
}

void xoa(char *s, char k) {
	for (int i = 0; i < strlen(s); i++)
		if (s[i] == '\0') return; //break
		while (s[i] == k)
			//Xoa ky tu k
			for (int j = i; j < strlen(s); j++)
				s[j] = s[j + 1];
}

int main() {
	char s[50]; 
	cout << "s="; gets(s);
	cout<<"Xau co " << scct(s) << " chu thuong" << endl;
	xoa(s, 'a');
	cout << "Xau sau khi xoa: " << s;
	return 0;
}

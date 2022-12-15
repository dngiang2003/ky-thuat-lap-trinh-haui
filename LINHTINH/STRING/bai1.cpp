#include <iostream>
#include <string>

using namespace std;

int main() {
	string s = "anh C dang Cham Cam";
	cout << "Ban dau: " << s << endl;
	for (int i=0; i<s.size(); i++)
		if (s[i]=='C') {
			s.insert(i+1, "UONC");
		}
	cout << "Ket qua: " << x;
	return 0;
}

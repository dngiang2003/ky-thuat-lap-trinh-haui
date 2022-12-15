#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	string res;
	for (int i=0; i<s.size(); i++) {
		if (s[i]!=s[i-1]) {
			res += s[i];
		}
	}
	cout << res;
	return 0;
}


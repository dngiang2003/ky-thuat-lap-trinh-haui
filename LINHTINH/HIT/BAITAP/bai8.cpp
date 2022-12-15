#include <iostream>
#include <string>

using namespace std;

int check(string s1, string s2) {
	// a nho hon b
	if (s1.length() < s2.length()) return 1;
	// a lon hon b
	if (s1.length() > s2.length()) return 2;
	// a bang b
	if (s1 == s2) return 3;
	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] < s2[i]) return 1;
		if (s1[i] > s2[i]) return 2;
	}
	return 3;
}

int main() {
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	if (check(s1, s2) == 1) cout << "Duy dep trai";
	if (check(s1, s2) == 2) cout << "Duy xau trai";
	if (check(s1, s2) == 3) cout << "Boi roi";
	return 0;
}


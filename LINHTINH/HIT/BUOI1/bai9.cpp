#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int luong;
	long thue;
	cin >> luong;
	if (luong<10) {
		cout << 0;
	} else {
		thue = luong*100000;
		cout << thue;
	}
	return 0;
}


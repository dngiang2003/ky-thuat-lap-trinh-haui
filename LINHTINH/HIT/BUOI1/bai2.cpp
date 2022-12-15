#include <iostream>
#include <math.h>

using namespace std;

bool namNhuan(int n) {
	if (n%4==0 && n%100!=0) return true;
	if (n%400==0) return true;
	return false;
}

int main() {
	int n;
	cin >> n;
	if (namNhuan(n)) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}



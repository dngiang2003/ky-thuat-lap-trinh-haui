#include <iostream>
#include <math.h>

using namespace std;

bool SNT(int n) {
	if (n<=1) return false;
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i==0) return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	if (SNT(n)) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}

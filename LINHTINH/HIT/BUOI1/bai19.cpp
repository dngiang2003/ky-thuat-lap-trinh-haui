#include <iostream>
#include <math.h>

using namespace std;

bool snt(int n) {
	if (n<2) return false;
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i==0) return false;
	}
	return true;
}

bool check(int n) {
	for (int i=1; i<=n; i++) {
		for (int j=1; j)
		if (snt(n/i)) return true;
	}
	return false;
}


int main() {
	int n = 100;
	for (int i=1; i<=n; i++) {
		if (check(i)) cout << i << "  ";
	}
	return 0;
}


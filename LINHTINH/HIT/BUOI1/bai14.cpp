#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n = 10;
	for (int i=1; i<=n; i++) {
		if (n%i==0) cout << i << " ";
	}
	return 0;
}


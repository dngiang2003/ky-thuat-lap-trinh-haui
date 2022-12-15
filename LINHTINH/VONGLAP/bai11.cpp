#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int a;
	while (a*a<1000) {
		a++;
	}
//	do {
//		a++;
//	} while (a*a<1000);
	cout << "Ket qua a = " << a;
	return 0;
}



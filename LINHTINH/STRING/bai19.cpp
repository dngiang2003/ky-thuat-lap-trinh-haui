#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << "Duy xau trai";
	} else if (a < b) {
		cout << "Duy dep trai";
	} else {
		cout << "Boi roi";
	}
	return 0;
}


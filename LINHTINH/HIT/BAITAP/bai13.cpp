#include <iostream>
#include <math.h>

using namespace std;

int ucln(int a, int b) {
	if (a==1||b==1) return 1;
	// doi cho neu a>b vi for theo bien b
	int temp;
	if (a>b) {
		temp = a;
		a = b;
		b = temp;
	}
	for (int i=b; i>=2; i--) {
		if (a%i==0&&b%i==0) return i;
	}
}

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int uc = ucln(a*d, b*c);
	cout << a*d/uc << "/" << b*c/uc;
	return 0;
}



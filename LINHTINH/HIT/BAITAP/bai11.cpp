#include <iostream>
#include <math.h>

using namespace std;

int ucln(int a, int b) {
	if (a==1||b==1) return 1;
	int temp;
	if (a>b) {
		temp = a;
		a = b;
		b = temp;
	}
	for (int i=b; i>=1; i--) {
		if (a%i==0 && b%i==0) {
			return i;
		}
	}
}

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int tu = a*d + b*c;
	int tu2 = tu;
	int mau = b*d;
	tu = tu/ucln(tu, mau);
	mau = mau/ucln(tu2, mau);
	cout <<tu<<"/"<<mau;
	return 0;
}

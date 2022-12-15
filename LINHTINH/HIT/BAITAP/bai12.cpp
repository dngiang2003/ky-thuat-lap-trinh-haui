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
	for (int i=b; i>=2; i--) {
		if (i%a==0 && i%b==0) {
			return i;
		}
	}
}

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int tu = a*d;
	int mau = b*c;
	tu = tu/ucln(tu, mau);
	mau = mau/ucln(tu, mau);
	cout <<tu<<"/"<<mau;
	return 0;
}

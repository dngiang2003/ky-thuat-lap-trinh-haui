#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float a;
	cout << "Nhap a = ";
	cin >> a;
	float x = a;
	float res = (x*x+a)/(2*x);
	float epsilon = 0.0001f;
	while (abs((res-x)/x)>=epsilon) {
		res = (x*x+a)/(2*x);
	}
	cout << res;
	return 0;
}



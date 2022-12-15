#include <iostream>
#include <math.h>

using namespace std;

long gt(int n) {
	if (n==0||n==1) return 1;
	int res = 1;
	for (int i=2; i<=n; i++) {
		res *= i;
	}
	return res;
}

int main() {
	float x, epxilon = 0.00001;
	double s = 0, s1 = 0, s2 = 0;
	int i = 0;
	cout <<"Nhap x = ";
	cin >> x;
	x = x*M_PI/180;
	do {
		s1 = s2;
		s += (pow(-1, i)*pow(x, 2*i))/(gt(2*i));
		s2 = s;
		i++;
	} while (fabs(s2-s1)>epxilon);
	cout <<"Ket qua = "<<s2;
	return 0;
}



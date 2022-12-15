#include <iostream>
#include <math.h>

using namespace std;

long gt(int n) {
	if (n<=1) return 1;
	long res = 1;
	for (int i=2; i<=n; i++) {
		res *= i;
	}
	return res;
}
float emux(float x, float epxilon) {
	if (x==0) return 1;
	float s = 0, s1 = 0, s2 = 0;
	int i = 0;
	do {
		s1 = s2;
		s = s + pow(x,i)/gt(i);
		s2 = s;
		i++;
	} while (fabs(s2-s1)>epxilon);
	return s2;
}

int main() {
	int n;
	cout << "Nhap n = ";
	cin >> n;
	float epxilon;
	cout << "Nhap epxilon = ";
	cin >> epxilon;
	cout <<"Ket qua = "<<round(emux(n, epxilon)*1000)/1000;
	return 0;
}



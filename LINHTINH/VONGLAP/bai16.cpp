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
	int i = 0;
	double s = 0, s1 = 0, s2 = 0;
	float epxilon = 0.00001;
	float x;
	cout << "Nhap x = ";
	cin >> x;
	do {
		s1 = s2;
		s += pow(x, i)/gt(i);
		s2 = s;
		i++;
	} while (fabs(s2-s1)>epxilon);
	cout << "Ket qua = "<<s2;
	return 0;
}



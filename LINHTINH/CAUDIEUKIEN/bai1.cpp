#include <iostream>
#include <math.h>

using namespace std;

int gt(int n) {
	if (n==0) return 1;
	int s = 1;
	for (int i=1; i<=n; i++) {
		s *= i;
	}
	return s;
}
int main(){
	int n;
	cout << "Nhap N = ";
	cin >> n;
	while (n<0) {
		cout << "Nhap lai N = ";
		cin >> n;
	}
	cout << n << "! = "<< gt(n);
	return 0;
}


#include <iostream>
#include <math.h>

using namespace std;

void nhap(int &n) {
	cout <<"Nhap n = ";
	cin >> n;
	while (n<=0) {
		cout <<"Nhap lai n = ";
		cin >> n;
	}
}
void chuso(int n) {
	int a;
	int s;
	while (n!=0) {
		a = n/10;
		s = n - a*10;
		cout <<s<<" ";
		n = a;
	}
}

int main() {
	int n;
	nhap(n);
	chuso(n);
	return 0;
}



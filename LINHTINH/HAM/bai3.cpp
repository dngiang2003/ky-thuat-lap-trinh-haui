#include <iostream>
#include <math.h>

using namespace std;

void nhap(int &a, int &b) {
	cout <<"Nhap a = ";
	cin >> a;
	while (a<=0) {
		cout <<"Nhap lai a = ";
		cin >> a;
	}
	cout <<"Nhap b = ";
	cin >> b;
	while (b<=0) {
		cout <<"Nhap lai b = ";
		cin >> b;
	}
}
int ucln(int a, int b) {
	int tg;
	if (a<b) {
		tg = a;
		a = b;
		b = tg;
	}
	int r;
	while (b!=0) {
		r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	int a, b;
	nhap(a, b);
	cout <<"UCLN = "<<ucln(a,b);
	return 0;
}



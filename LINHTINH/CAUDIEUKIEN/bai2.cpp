#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;

bool snt(int n) {
	if (n<2) return false;
	int s = 0;
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i==0) {
			s += i;
		}
	}
	if (s==0) {
		return true;
	} else {
		return false;
	}
}
int main(){
	int n;
	cout << "Nhap N = ";
	cin >> n;
	while (n<0) {
		cout << "Nhap lai N = ";
		cin >> n;
	}
	if (snt(n)) {
		cout << n <<" la so nguyen to!";
	} else {
		cout << n <<" khong la so nguyen to!";
	}
	return 0;
}


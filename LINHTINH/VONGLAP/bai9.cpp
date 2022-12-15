#include <iostream>
#include <math.h>

using namespace std;

bool snt(int n) {
	if (n<2) return false;
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i==0) return false;
	}
	return true;
}


int main(){
	int n;
	cout << "Nhap n = ";
	cin >> n;
	while (n<2) {
		cout << "Nhap lai n = ";
		cin >> n;
	}
	int tong = 0;
	int count = 0;
	for (int i=2; i<=n; i++) {
		if (snt(i)) {
			tong += i;
			count++;
		}
	}
	cout <<"Day tren co "<<count<<" so nguyen to!"<<endl;
	cout <<"Tong cua chung = "<<tong;
	return 0;
}


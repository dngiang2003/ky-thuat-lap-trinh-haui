#include <iostream>
#include <math.h>

using namespace std;
int tt(int n) {
	int tong = 0;
	for (int i=1; i<=n; i++) {
		tong += i;
	}
	return tong;
}
int main(){
	int n;
	cout <<"Nhap n = ";
	cin >> n;
	while (n<10||n>20) {
		cout <<"Nhap lai n = ";
		cin >>n;
	}
	cout <<"Ket qua tong = "<<tt(n);
	return 0;
}


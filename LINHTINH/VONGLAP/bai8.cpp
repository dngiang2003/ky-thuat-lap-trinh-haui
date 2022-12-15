#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n, m;
	cout <<"Nhap n = ";
	cin >>n;
	while (n<=0) {
		cout <<"Nhap lai n = ";
		cin >> n;
	}
	cout <<"Nhap m = ";
	cin >>m;
	while (m<=0) {
		cout <<"Nhap lai m = ";
		cin >> m;
	}
	int leAm = 0;
	int leDuong = 0;
	int chanAm = 0;
	int chanDuong = 0;
	for (int i=-n; i<=m; i++) {
		if (i<0) {
			if (i%2==0) {
				chanAm += i;
			} else {
				leAm += i;
			}
		} else {
			if (i%2==0) {
				chanDuong += i;
			} else {
				leDuong += i;
			}
		}
	}
	cout <<"Tong le duong = "<<leDuong<<endl;
	cout <<"Tong le am = "<<leAm<<endl;
	cout <<"Tong chan duong = "<<chanDuong<<endl;
	cout <<"Tong chan am = "<<chanAm<<endl;
	return 0;
}


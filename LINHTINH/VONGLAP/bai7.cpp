#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	cout <<"Nhap n = ";
	cin >>n;
	while (n<=0) {
		cout <<"Nhap lai n = ";
		cin >>n;
	}
	int tc = 0;
	int tl = 0;
	for (int i=1; i<=n; i++) {
		if (i%2==0) {
			tc += i;
		} else {
			tl += i;
		}
	}
	cout <<"Tong le = "<<tl<<endl;
	cout <<"Tong chan = "<<tc;
	return 0;
}


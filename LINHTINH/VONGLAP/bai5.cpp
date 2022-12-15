#include <iostream>
#include <math.h>

using namespace std;

float bt(int n, float x) {
	float res = 0;
	if (n%2==0) {
		for (int i=1; i<=n; i++) {
			res += (pow(x,i))/(pow(3, i-1));
		}
	} else {
		res = 0;
	}
	return res;
}

int main(){
	int n;
	float x;
	cout << "Nhap n = ";
	cin >> n;
	while (n<0) {
		cout <<"Nhap lai n = ";
		cin >> n;
	}
	cout << "Nhap x = ";
	cin >> x;
	cout <<"Ket qua = "<<round(1000*bt(n, x))/1000;
	return 0;
}


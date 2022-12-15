#include <iostream>
#include <math.h>

using namespace std;

float bt(int n) {
	float res = 0;
	for (int i=1; i<=n; i++) {
		res += 1.0/i;
	}
	return res;
}

int main(){
	int n;
	cout << "Nhap n = ";
	cin >> n;
	while (n<0) {
		cout <<"Nhap lai n = ";
		cin >> n;
	}
	cout <<"Ket qua = "<<round(100*bt(n))/100;
	return 0;
}


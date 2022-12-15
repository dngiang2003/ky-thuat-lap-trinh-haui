#include <iostream>
#include <math.h>

using namespace std;

int gt(int n) {
	if (n<=1) return 1;
	int result = 1;
	for (int i=1; i<=n; i++) {
		result *= i;
	}
	return result;
}

int main(){
	int n;
	cout <<"Nhap n = ";
	cin >> n;
	while (n<0) {
		cout << "Nhap lai n = ";
		cin >> n;
	}
	cout << "Ket qua: "<<n<<"! = "<<gt(n);
	return 0;
}


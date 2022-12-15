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

int demso(int n) {
	int count = 0;
	while (n!=0) {
		n /= 10;
		count++;
	}
	return count;
}

int main() {
	int n;
	nhap(n);
	cout <<"So chu so cua "<<n<<" la: "<<demso(n);
	return 0;
}



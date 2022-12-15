#include <iostream>
#include <math.h>

using namespace std;

int tohop(int n, int k) {
	int tu = 1, mau = 1;
	for (int i = k; i<=1; i--) {
		mau *= i;
	}
	for (int i = n; i<=n-k+1; i--) {
		tu *= i;
	}
	cout <<tu<<" "<<mau;
	return tu/mau;
	
}
int main() {
	int n, k;
	cout <<"Nhap n = ";
	cin >> n;
	cout << "Nhap k = ";
	cin >> k;
	while (n<k) {
		cout <<"Nhap lai n = ";
		cin >> n;
		cout << "Nhap lai k = ";
		cin >> k;
	}
	cout <<"C("<<k<<","<<n<<") = "<<tohop(n, k);
	return 0;
}



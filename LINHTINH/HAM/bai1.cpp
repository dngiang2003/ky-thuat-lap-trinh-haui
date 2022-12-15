#include <iostream>
#include <math.h>

using namespace std;

void nhap(int &n) {
	cout << "Nhap n = ";
	cin >> n;
	while (n<=0) {
		cout << "Nhap lai n = ";
		cin >> n;
	}
}
long gt(int n) {
	if (n<=1) return 1;
	long ketqua = 1;
	for (int i=2; i<=n; i++) {
		ketqua *= i;
	}
	return ketqua;
}

long tophop(int n, int k) {
	return gt(n)/gt(k)/gt(n-k);
}

int main() {
	int n;
	nhap(n);
	cout << n <<"! = "<< gt(n) << endl;
	int k;
	cout << "Nhap k = ";
	cin >> k;
	while (k>n) {
		cout << "Nhap lai k = ";
		cin >> k;
	}
	cout << "To hop chap "<<k<<" cua "<<n<<" = "<<tophop(n, k);
	
	return 0;
}



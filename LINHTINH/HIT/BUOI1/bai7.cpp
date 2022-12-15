#include <iostream>

using namespace std;

int main() {
	int n, i, j;
	cin >> n;
	int skt = 2*n-1; // so ki tu tren 1 dong
	int sdc = 0; // so dau cach trang tren 1 dong
	int sds = 0; // so dau * tren 1 dong
	for (i=1; i<=n; i++) {
		sdc = n-i;
		sds = skt - 2*sdc;
		// in ra so khong cach dau tien
		for (j=1; j<=sdc; j++) {
			cout <<" ";
		}
		// in ra so dau * tren 1 dong
		for (j=1; j<=sds; j++) {
			cout <<"*";
		}
		if (i<n) cout << endl;
	}
	return 0;
}

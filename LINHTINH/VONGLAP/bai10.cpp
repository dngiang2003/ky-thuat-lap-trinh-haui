#include <iostream>
#include <math.h>

using namespace std;

void phantich(int n) {
	for (int i=2; i<=sqrt(n); i++) {
		while (n%i==0) {
			cout <<i;
			cout << "x";
			n/=i;
		}
		
	}
	if (n!=1) cout << n;
}
int main() {
	int n;
	cout <<"Nhap n = ";
	cin >> n;
	phantich(n);
	return 0;
}


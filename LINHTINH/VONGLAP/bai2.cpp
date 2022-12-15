#include <iostream>
#include <math.h>

using namespace std;

bool snt(int n) {
	if (n<2) return false;
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i==0) return false;
	}
	return true;
}

int main(){
	int n;
	cout << "Nhap n = ";
	cin >> n;
	if (snt(n)) {
		cout <<n<<" la so nguyen to!";
	} else {
		cout <<n<<" khong 4la so nguyen to!";
	}
	return 0;
}


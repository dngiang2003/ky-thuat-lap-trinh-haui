#include <iostream>

using namespace std;

// Ham nhap so nguyen duong n > 1
void nhap(int &n) {
	do {
		cout << "Nhap so nguyen duong n > 1: ";
		cin >> n;
	} while (n <= 1);
}

// Ham tinh so Fibonacci thu n (dung vong lap)
int Fi(int n) {
	int t1 = 0, t2 = 1, fibo = 0;
	for (int i = 1; i <= n; i++) {
		t1 = t2;
		t2 = fibo;
		fibo = t1 + t2;
	}
	return fibo;
}

// Ham tinh so Fibonacci thu n (de quy)
int Fibo(int n) {
	if (n <= 2) return 1;
	return Fibo(n - 1) + Fibo(n - 2);
}

// Ham in ra man hinh day k so Fibonacci dau tien
void inDayFibo(int k) {
	for (int i = 1; i <= k; i++) {
		cout << Fi(i) << " ";	// dung vong lap
		//cout << Fibo(i) << " "; // dung de quy
	}
}

int main() {
	int n;
	nhap(n);
	inDayFibo(n);
	return 0;
}

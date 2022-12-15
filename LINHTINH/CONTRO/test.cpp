#include <iostream>
#include <math.h>

using namespace std;


void double1(int x) {
	x *= 2;
}

void double2(int &x) {
	x *= 2;
}

void double3(int *x) { // x la con tro
	(*x) *= 2; // toan tu tham chieu
}

void swap(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main() {
	int n = 1000;
	int *prt = &n;
	double1(n);
	double2(n);
	double3(prt);
	cout << endl << n;
	return 0;
}

//	if (ptr == NULL) {
//		cout << "helo";
//	}
//int a = 100;
//int *ptr = &a;
//
//cout << ptr;
//cout << endl << *ptr;
//db(ptr);
//cout << endl << *ptr;

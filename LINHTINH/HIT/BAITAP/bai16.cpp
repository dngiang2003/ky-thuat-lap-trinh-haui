#include <iostream>
#include <math.h>

using namespace std;
int main() {
	int a[5][5] = {};
	int temp = 0;
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			temp++;
			a[i][j] = temp;
		}
	}
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			cout << a[i][j] << " ";
		}
		cout <<endl;
	}
	return 0;
}

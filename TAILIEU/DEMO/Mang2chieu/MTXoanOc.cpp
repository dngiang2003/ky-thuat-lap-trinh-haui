#include <iostream>
#define ROW 100
#define COL 100

using namespace std;

void taoMaTranXoanOc(int b[][COL], int &m, int &n){
	cout << "Nhap so dong : ";
	cin >> m;
	cout << "Nhap so cot : ";
	cin >> n;
    int d = 0, gt = 1, hang = m - 1, cot = n - 1;
    while (gt <= m * n) {
    	for (int i = d; i <= cot; i++) b[d][i] = gt++;
    	for (int i = d + 1; i <= hang; i++) b[i][cot] = gt++;
    	for (int i = cot - 1; i >= d && gt <= m * n; i--) b[hang][i] = gt++;
    	for (int i = hang - 1; i > d && gt <= m * n; i--) b[i][d] = gt++;
    	d++; hang--; cot--;
	}
}

void hienThiMaTran(int b[][COL], int m, int n) {
	cout << "Hien thi mang 2 chieu: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "\t" << b[i][j];
		}
		cout << endl << endl;
	}
}

int main()
{
	int b[ROW][COL]; 
	int m, n; 

	taoMaTranXoanOc(b, m, n);
	hienThiMaTran(b, m, n);

	return 0;
}

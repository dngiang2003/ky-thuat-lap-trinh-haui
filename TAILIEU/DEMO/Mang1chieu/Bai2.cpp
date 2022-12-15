#include <iostream>

using namespace std;

int main() {
//	int a[10] = {1, 2, 3, 5, 7, 8};
	int a[10] = {9, 8, 5, 3, 2, 1};
	int n = 6;
	bool tangts = true, tangdan = true, giamts = true, giamdan = true;
	for (int i = 0; i <= n - 2; i++) {
		if (a[i] < a[i + 1]) 
			giamts = giamdan = false;
		else if (a[i] == a[i + 1]) 
			giamts = tangts = false;
		else 
			tangts = tangdan = false;
		if (!tangdan && !giamdan) break;
	}
	cout << tangts << " " << tangdan << " " << giamts << " " << giamdan << endl;
	if (tangts) cout << "Mang tang that su";
	else if (tangdan) cout << "Mang tang dan";
	else if (giamts) cout << "Mang giam that su";
	else if (giamdan) cout << "Mang giam dan";
	else cout << "Mang khong theo quy luat nao";
	return 0;
}

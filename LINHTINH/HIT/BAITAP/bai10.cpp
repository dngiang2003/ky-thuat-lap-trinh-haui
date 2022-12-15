#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n, m;
	cin >> n;
	cin >> m;
	int a[n][m];
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> a[i][j];
		}
	}
	int dem=0;
	for (int i=0; i<=n-3; i++) {
		for (int j=1; j<=m-1; j++) {
			if (a[i][j]+a[i+1][j]+a[i+1][j+1]+a[i+1][j-1]+a[i+2][j]==5) {
				dem++;
			}
		} 
	}
	cout <<dem;
	return 0;
}



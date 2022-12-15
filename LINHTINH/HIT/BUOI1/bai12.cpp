#include <iostream>
using namespace std;

int main(){
	int n,t=1,k=0;
	cin>>n;
	int n2=n;
	int a[n][n];
	do{
		for(int j=k; j<n; j++){
			a[k][j]=t;
			t++;
		}
		for(int i=k+1; i<n; i++){
			a[i][n-1]=t;
			t++;
		}
		for(int j=n-2; j>=k; j--){
			a[n-1][j]=t;
			t++;
		}
		for(int i=n-2; i>=k+1; i--){
			a[i][k]=t;
			t++;
		}
		k++;
		n--;
	} while (t<=n2*n2);

	for(int i=0; i<n2; i++){
		for(int j=0; j<n2; j++){
			if(j == n2-1){
            	cout << a[i][j];
            }else{
            	cout << a[i][j] << ' ';
            }
		}
		if(i == n2-1){
        	
        }else{
        	cout << endl;
        }
	}

	return 0;
}

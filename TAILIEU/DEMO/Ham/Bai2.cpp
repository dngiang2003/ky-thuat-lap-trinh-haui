// Luu y: Su dung kieu tra ve cua ham luyThua (long double) va giaiThua (long long) de tinh x < 6
// Neu dung float va int thi nhap x trong khoang (1.0, 2.0)

#include <iostream>
#include <math.h>

using namespace std;

long double luyThua(double n, int k) {
    long double pow = 1;
    for (int i = 1; i <= k; i++)
        pow *= n;
    return pow;
}
 
long long giaiThua(int n) {
    long long giaithua = 1;
    for (int i = 1; i <= n; i++)
        giaithua *= i;
    return giaithua;
}
 
double fun(double x, double e) {
    double sum = 0, g;
    int i = 0;
    do { 					
    	g = luyThua(x, i) / giaiThua(i); 	// Tinh gia tri cua 1 so hang
        sum += g;							// Cong so hang vao tong (e^x)
        i++;
    } while (fabs(g) > e);
    return sum;
}
 
int main() {
    float x, e;
    cout << "Nhap x: "; cin >> x;
    cout << "Nhap e: "; cin >> e;
    cout << "Tinh e^x = " << fun(x, e) << endl;
    cout << "Ket qua dung e^x = " << exp(x);
    return 0;
}

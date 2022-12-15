#include <fstream> 
#include <iostream> 
#include <stdlib.h>
using namespace std; 

void CreateFile(char *k, int n) {
    //srand(10000*time(NULL));
    ofstream f(k, ios::out);
    f << n << endl;
    for (int i = 0; i < n; i++)
        f << rand() % 50 << " ";
    f.close();
}

void ReadFile(char *k, int *&a, int &n) {
    ifstream f(k, ios::in);
    char S[255];
    f >> S;
    n = atoi(S); //S="100"; n=100
    a = new int[n];
    for (int i = 0; i < n; i++) {
        f >> S;
        a[i] = atoi(S);
    }
    f.close();
}

void Sort(int *a, int n) {
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
}

void WriteFile(char *k, int *a, int n) {
    ofstream f(k, ios::out);
    f << n << endl;
    for (int i = 0; i < n; i++)
        f << a[i] << " ";
    f.close();
}

int main() {
    CreateFile("Bai8.5C/FILE.txt", 100);
    int *a;
    int n;
    ReadFile("Bai8.5C/FILE.txt", a, n);
    Sort(a, n);
    WriteFile("Bai8.5C/SORTED_FILE.txt", a, n);
    cout << "Ket thuc! hay kiem tra file SORTED_FILE.txt";
    return 0;
}

#include <iostream>
#include <fstream>

using namespace std;

void CREATE_FILE(char *k1, char *k2) {
    ofstream f(k1, ios::out);
    f << "7 2" << endl;
    f << "1 2 3 1" << endl;
    f << "2 2 4 1" << endl;
    f << "3 3 5 1";
    f.close();
    f.open(k2, ios::out);
    f << "4 1 1 2" << endl;
    f << "5 2 2 2" << endl;
    f << "6 3 3 2" << endl;
    f << "7 4 4 2";
    f.close();
}

void READ_WRITE(char *k1, char *k2, char *k3) {
// Mo tep 1 de doc và ghi vao tep 3
    ifstream f(k1, ios::in);
    ofstream f3(k3, ios::out);
    char s[255];
    while (!f.eof()) {
        f.getline(s, 255);
        f3 << s << endl;
    }
    f.close();
    f3.close();
// Mo tep 2 de doc và ghi bo sung vao tp 3
    f.open(k2, ios::in);
    f3.open(k3, ios::app);
    while (!f.eof()) {
        f.getline(s, 255);
        f3 << s << endl;
    }
    f.close();
    f3.close();
}

void READ_FILE(char *k) {
    ifstream f(k, ios::in);
    char s[255];
    while (!f.eof()) {
        f.getline(s, 255);
        cout << s << endl;
    }
    f.close();
}

int main() {
    CREATE_FILE("FILE1.TXT", "FILE2.TXT");
    READ_WRITE("FILE1.TXT", "FILE2.TXT", "FILE3.TXT");
    READ_FILE("FILE3.TXT");
    return 0;
}

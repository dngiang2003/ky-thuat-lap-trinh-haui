#include <fstream> 
#include <iostream>
using namespace std; 
int main () { 
    char data[100]; 
    ofstream outfile; // mo mot file trong che do write. 
    
	outfile.open("D:/vidu.txt"); 
    cout << "Ghi du lieu toi file!" << endl; 
    cout << "Nhap ten cua ban: "; 
    cin.getline(data, 100);
    
    outfile << data << endl; // ghi du lieu da nhap vao trong file. 
    
	cout << "Nhap tuoi cua ban: "; 
    cin >> data;
	cin.ignore();  // xoa bo nho dem, tranh bi troi lenh
    
    outfile << data << endl; // ghi du lieu da nhap vao trong file. 
    
    outfile.close(); // dong file da mo. 
    
    //==============================================================
    
	ifstream infile; //mo mot file trong che do read. 
    
    infile.open("D:/vidu.txt"); 
    cout << "\n===========================\n" ; 
    cout << "Doc du lieu co trong file!" << endl; 
	
	string line;
	getline(infile, line); // doc du lieu tren 1 dong.
    cout << line << endl; // ghi du lieu tren man hinh. 
    
    infile >> data; // doc du lieu cho den khi gap khoang trang. 
	cout << data << endl;
    
    infile.close(); // dong file da mo. 
    return 0; 
}

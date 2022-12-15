#include <iostream>
#include <stdio.h>
using namespace std;

void writeToFile(FILE *file) {
	fputs("Hello World!\nHaUI\nCNTT", file);
}

void readFromFile(FILE *file)
{
	char str[255];
	while (fgets(str, 255, file) != NULL) {
		cout << str;
	}
}

int main() {
	const char *filePath = "D:/my_document.txt";
	FILE *file;

	file = fopen(filePath, "w");
	if (!file)
		cout << "Khong ton tai tep tin" << endl;
	else
		cout << "Tep tin da duoc mo" << endl;

	writeToFile(file);
	fclose(file);
	
	file = fopen(filePath, "r");
	readFromFile(file);
	fclose(file);
	
//	remove(filePath);
	return 0; 
}

#include <iostream> 
#include <string.h>
using namespace std; 
int main () 
{ 
    char hs1[20], hs2[20];
   	
   	cout << "Ten hoc sinh 1: "; fflush(stdin); gets(hs1);
   	cout << "Ten hoc sinh 2: "; fflush(stdin); gets(hs2);
    
    cout << "Neu phan biet chu hoa, chu thuong thi ";
    if (strcmp(hs1, hs2) == 0) cout << "ten 2 hoc sinh giong nhau" << endl;
    else cout << "ten 2 hoc sinh khac nhau" << endl;
    
    cout << "Neu khong phan biet chu hoa, chu thuong thi ";
	if (strcmpi(hs1, hs2) == 0) cout << "ten 2 hoc sinh giong nhau" << endl;
	else cout << "ten 2 hoc sinh khac nhau" << endl;
    
    cout << "Neu chi so sanh 3 ky tu dau thi ";
    if (strncmp(hs1, hs2, 3) == 0) cout << "ten 2 hoc sinh giong nhau" << endl;
	else cout << "ten 2 hoc sinh khac nhau" << endl;
    
    cout << "Ten hs1 xuat hien trong ten hs2: ";
    if (strstr(hs2, hs1)) cout << "Dung" << endl;
	else cout << "Sai" << endl;
    
    return 0; 
}

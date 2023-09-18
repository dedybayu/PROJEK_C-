#include <iostream>
using namespace std;

int main () {
	
int nilai;
	
	cout << "Inputkan nilai: ";
	cin >> nilai;
	
	switch(nilai) {
		case 1:
		 cout << "Entry data" << endl;
			break;
		case 2:
			cout << "Cetak laporan" << endl;
			break;
		case 3:
			cout << "Keluar" << endl;
			break;
	
		default:
			cout << "erorrrrrrrrrrrr!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		}
	return 0;
}

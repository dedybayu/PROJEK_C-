#include <iostream>

using namespace std;

int main(){
	cout << "Nama  : Dedy Bayu Setiawan" <<endl;
	cout << "Kelas : X TKJ - 1" <<endl;
	cout << "Absen : 11" <<endl;
	cout << "  "<<endl;
	
	float panjang;
	float lebar;
	float tinggi;
	float luas;
	
	cout << "Ini akan menghitung volume balok!!" <<endl;
	cout << "Inputkan panjang : ";
	cin >> panjang;
	cout << "Inputkan lebar   : ";
	cin >> lebar;
	cout << "inputkan tinggi  : ";
	cin >> tinggi;
	
	
	luas = panjang * lebar * tinggi;
	
	cout << "hasil volume     : " ;
	cout << luas << endl;

return 0;
}

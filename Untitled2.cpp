#include <iostream>
using namespace std;

int main(){
	cout << "Nama  : Dedy Bayu Setiawan" <<endl;
	cout << "Kelas : X TKJ - 1" <<endl;
	cout << "Absen : 11" <<endl;
	cout << "  "<<endl;
	
	float jarijari, luas, pi;
	pi = 3.14;
	
	cout << "Ini akan menghitung luas lingkaran!!!" <<endl;
	cout << " "<<endl;
	cout << "Inputkan jari jari   : ";
	cin >> jarijari;
	
	luas = pi * jarijari * jarijari;
	
	cout << "hasil luas lingkaran : " ;
	cout << luas << endl;

return 0;
}

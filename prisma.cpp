#include <iostream>
using namespace std;

int main(){
	cout << "Nama  : Dedy Bayu Setiawan" <<endl;
	cout << "Kelas : X TKJ - 1" <<endl;
	cout << "Absen : 11" <<endl;
	cout << "  "<<endl;
	cout << "Program menghitung volume prisma "<<endl <<endl;
	
	float V, t, la;
	
	cout << "Masukan luas alas      : ";
	cin >> la;
	cout << "Masukan tinggi prisma  : ";
	cin >> t;

	V = la * t;
	
	cout << endl;
	cout << "Hasil volume           : ";
	cout << V <<endl;

return 0;
}

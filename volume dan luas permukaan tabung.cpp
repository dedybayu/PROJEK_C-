#include <iostream>
using namespace std;

int main(){
	cout << "Nama  : Dedy Bayu Setiawan" <<endl;
	cout << "Kelas : X TKJ - 1" <<endl;
	cout << "Absen : 11" <<endl;
	cout << "  "<<endl;
	cout << "Program menghitung volume dan luas peermukaan tabung "<<endl <<endl;
	
	float V, Lp, r, t;
	const float phi = 3.14;
	
	cout << "Masukan jari-jari    : ";
	cin >> r;
	cout << "Masukan tinggi       : ";
	cin >> t;
	
	V = phi * r * r * t;
	Lp = 2 * phi * r * ( r + t);
	
	cout << endl;
	cout << "Hasil volume         : ";
	cout << V <<endl;
	cout << "Hasil luas permukaan : ";
	cout << Lp << endl;
	
return 0;
}

#include <iostream>
using namespace std;

int main(){
	cout << "Nama  : Dedy Bayu Setiawan" <<endl;
	cout << "Kelas : X TKJ - 1" <<endl;
	cout << "Absen : 11" <<endl;
	cout << "  "<<endl;
	cout << "Program menghitung volume dan luas peermukaan kerucut "<<endl <<endl;
	
	float V, Lp, r, t, s;
	const float phi = 3.14;
	
	cout << "Masukan jari-jari    : ";
	cin >> r;
	cout << "Masukan tinggi       : ";
	cin >> t;
	cout << "Masukan garis pelukis: ";
	cin >> s;
	
	V = (phi * r * r * t) / 3;
	Lp = phi * r * (r + s);
	
	cout << endl;
	cout << "Hasil volume         : ";
	cout << V <<endl;
	cout << "Hasil luas permukaan : ";
	cout << Lp << endl;
	
return 0;
}

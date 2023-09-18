#include <iostream>
using namespace std;

int main(){
	cout << "Nama  : Dedy Bayu Setiawan" <<endl;
	cout << "Kelas : X TKJ - 1" <<endl;
	cout << "Absen : 11" <<endl;
	cout << "  "<<endl;
	cout << "Program menghitung volume limas segitiga "<<endl <<endl;
	
	float V, t, as, ts;
	
	cout << "Masukan tinggi limas         : ";
	cin >> t;
	cout << "Masukan alas segitiga        : ";
	cin >> as;
	cout << "Masukan tinggi segitiga alas : ";
	cin >> ts;
	
	V = (((as * ts)/2) * t) / 3;
	
	cout << endl;
	cout << "Hasil volume                 : ";
	cout << V <<endl;

return 0;
}

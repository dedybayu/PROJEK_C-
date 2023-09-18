#include <iostream>
using namespace std;

int main () {
	
	int pilihan; 
	float bil1, bil2, hasil;
	
	cout << "1. Penjumblahan  "<< endl;
	cout << "2. Pengurangan "<< endl;
	cout << "3. Luas persegi panjang "<< endl;
	cout << "4. Luas lingkaran "<< endl;
	
	cout << "Masukan Pilihan : ";
	cin >> pilihan;
	cout << " "<<endl;
	
	switch (pilihan){

	case 1 :
		cout << "Masukan Bilangan 1 : ";
		cin >> bil1;
		cout << "Masukan Bilangan 2 : ";
		cin >> bil2;
		
		hasil = bil1 + bil2;
		
		cout << "Hasilnya Adalah    : " << hasil;
	break;
	
	case 2 :
		cout << "Masukan Bilangan 1 : ";
		cin >> bil1;
		cout << "Masukan Bilangan 2 : ";
		cin >> bil2;
		
		hasil = bil1 - bil2;
		
		cout << "Hasilnya Adalah    : " << hasil;
	break;
	
	case 3 :
		cout << "Masukan Panjang : ";
		cin >> bil1;
		cout << "Masukan Lebar   : ";
		cin >> bil2;
		
		hasil = bil1 * bil2;
		
		cout << "Hasilnya Adalah : " << hasil;
	break;
	
	case 4 :
		cout << "Masukan jari-jari : ";
		cin >> bil1;
		
		hasil = 3.14 * bil1 * bil1;
		
		cout << "Hasilnya Adalah   : " << hasil;
	break;
	
	default :
		cout << "Errorrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr";
	}
	
	return 0; 
}

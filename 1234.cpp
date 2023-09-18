#include <iostream>
using namespace std;

int main () {
	
	int pilihan;
	
	cout << "1. Penjumblahan  "<< endl;
	cout << "2. Pengurangan "<< endl;
	cout << "3. Luas persegi panjang "<< endl;
	cout << "4. Luas lingkaran "<< endl;
	
	cout << "Masukan Pilihan : ";
	cin >> pilihan;
	cout << " "<<endl;
	
	if (pilihan == 1){
		int bil1, bil2, hasil;
		cout << "Masukan Bilangan 1 : ";
		cin >> bil1;
		cout << "Masukan Bilangan 2 : ";
		cin >> bil2;
		
		hasil = bil1 + bil2;
		
		cout << "Hasilnya Adalah    : " << hasil;
	}
	else if (pilihan == 2){
		int bil1, bil2, hasil;
		cout << "Masukan Bilangan 1 : ";
		cin >> bil1;
		cout << "Masukan Bilangan 2 : ";
		cin >> bil2;
		
		hasil = bil1 - bil2;
		
		cout << "Hasilnya Adalah    : " << hasil;
	}
	else if (pilihan == 3){
		int bil1, bil2, hasil;
		cout << "Masukan Panjang : ";
		cin >> bil1;
		cout << "Masukan Lebar   : ";
		cin >> bil2;
		
		hasil = bil1 * bil2;
		
		cout << "Hasilnya Adalah : " << hasil;
	}
	else if (pilihan == 4){
		int jari2, hasil;
		cout << "Masukan jari-jari : ";
		cin >> jari2;
		
		hasil = 3.14 * jari2 * jari2;
		
		cout << "Hasilnya Adalah   : " << hasil;
	}
	else{
		cout << "Errorrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr";
	}
	
	return 0; 
}

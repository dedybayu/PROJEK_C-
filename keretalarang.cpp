#include <iostream>
using namespace std;

int main () {
	
	int pilihan; 
	int bil1, bayar, hasil, hasil2;
	char backToMenu;
	
	menuUtama:

	cout << "========================================="<< endl;
	cout << "******Daftar Kelas Tiket Kereta Api******"<< endl;
	cout << "========================================="<< endl;
	cout << "1. Ekonomi  "<< endl;
	cout << "2. Bisnis "<< endl;
	cout << "3. Eksekutif "<< endl;
	cout << "========================================="<< endl <<endl;
	
	cout << "Masukan Pilihan : ";
	cin >> pilihan;
	cout << " "<<endl;
	
	switch (pilihan){

	case 1 :
		cout << "Harga tiket 150.000/Orang" <<endl <<endl;
		cout << "Masukan Jumblah Tiket : ";
		cin >> bil1;
		
		hasil = 150000 * bil1;
		
		cout << "Total Yang Harus Dibayarkan   : " << hasil <<endl;
		cout << "Bayar                         : " ;
		cin >> bayar;
		
		hasil2 = bayar - hasil;
	
		cout << "Kembalian                     : " << hasil2;
		
		cout <<endl<<"Apakah anda ingin belanja yang lain [Y/N]";
		cin >> backToMenu;
		
		system("cls");
		
		if (backToMenu == 'Y' || backToMenu == 'y'){
			goto menuUtama;	
		}
		else{
		cout <<	"Terimakasih sudah melakukan transaksi";
		
		}
	break;
	
	case 2 :
		cout << "Harga tiket 250.000/Orang" <<endl <<endl;
		cout << "Masukan Jumblah Tiket : ";
		cin >> bil1;
		
		hasil = 250000 * bil1;
		
		cout << "Total Yang Harus Dibayarkan   : " << hasil <<endl;
		cout << "Bayar                         : " ;
		cin >> bayar;
		
		hasil2 = bayar - hasil;
		
		cout << "Kembalian                     : " << hasil2;
		
			cout <<endl<<"Apakah anda ingin belanja yang lain [Y/N]";
		cin >> backToMenu;
		
		system("cls");
		
		if (backToMenu == 'Y' || backToMenu == 'y'){
			goto menuUtama;
		}
		else{
		cout <<	"Terimakasih sudah melakukan transaksi";
		
		}
	break;
	
	case 3 :
			cout << "Harga tiket 500.000/Orang" <<endl<<endl;
		cout << "Masukan Jumblah Tiket : ";
		cin >> bil1;
		
		hasil = 500000 * bil1;
		
		cout << "Total Yang Harus Dibayarkan   : " << hasil <<endl;
		cout << "Bayar                         : " ;
		cin >> bayar;
		
		hasil2 = bayar - hasil;
		
		cout << "Kembalian                     : " << hasil2;
		
			cout <<endl<<"Apakah anda ingin belanja yang lain [Y/N]";
		cin >> backToMenu;
		
		system("cls");
		
		if (backToMenu == 'Y' || backToMenu == 'y'){
				goto menuUtama;
		}
		else{
		cout<<	"Terimakasih sudah melakukan transaksi";
		
		}
	break;
	
	default :
		cout << "Errorrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr";
	}
	
	return 0; 
}

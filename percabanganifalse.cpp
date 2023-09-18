#include <iostream>
using namespace std;

int main () {
	
	string password;
	
	cout << "========== Silahkan Login ==========" << endl;
	cout << "masukan password: ";
	cin >> password;
	
	if (password == "estehanget"){
		cout << "Selamat datang bos!" << endl;
	} else {
		cout << "password salah, silahkan coba lagi!" << endl;
	}
	cout << "terimakasih sudah menggunakan aplikasi ini!" << endl;
	
	return 0; 
}

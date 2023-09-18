#include <iostream>
using namespace std;

int main () {
	
	cout << "=== Program Pembayaran ===" << endl;
	unsigned int total_belanja;
	
	cout << "masukan total belanja:   ";
	cin >> total_belanja;
	
	
	if(total_belanja > 100000) {
		cout << "selamat anda dapat hadiah" << endl;
	}
	cout << "terimakasih sudah berbelanja di toko kami" << endl;
	
	return 0;
}

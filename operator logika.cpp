#include <iostream>
using namespace std;

int main(){
	int a = 1; // true
	int b = 0; // false
	bool hasil;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	// logika AND
	hasil = a && b;
	cout << "a && b = " << hasil << endl;
	
	//logika OR
	hasil = a || b;
	cout << "a || b = " << hasil << endl;
	
	//logika NOT
	cout << "!a = " << !a << endl;
	
	return 0;
}

#include <iostream>
using namespace std;

int main () {
	
	int nilai;
	
	cout << "masukan nilai : ";
	cin >> nilai;
	
	if ( nilai >= 80 && nilai <= 100 ){
		cout << "nilai anda A" << endl;
	}
		
	else if (nilai >= 60 && nilai <=79 ){
		cout << "nilai anda B" <<endl;
	}
	else if (nilai >= 0 && nilai <= 60 )  {
		cout << "Nilai anda C" << endl;
	}
	else{
		cout<< " Eroorrrrrrrrrr";
	}
	
	return 0; 
}

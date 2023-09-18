#include <iostream>
using namespace std;

int main(){
	int a, b, n;
	cout<< "berapa baris? ";
	cin >> n;
	for( a = 1; a <= n; a++){
		for (b=1; b <= a; b++){
		cout << "$";
		}
		cout << endl;
	}
	for( a = 1; a <= n; a++){
		for (b=a; b <= n; b++){
		cout << "$";
		}
		cout << endl;
	}
	
return 0;
}

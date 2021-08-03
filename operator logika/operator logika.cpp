#include <iostream>
using namespace std;

int main(){
	
	int a = 5;
	int b = 5;
	
	bool hasil;
	
	// not
	hasil = !(a == 5);
	
	// and: kedua nilai benar untuk menghasilkan true 
	cout << "untuk and \n";
	hasil = (a == 5) and (b == 5); // true and true
	cout << hasil << endl;
	hasil = (a == 5) and (b == 4); // true and false
	cout << hasil << endl;
	hasil = (a == 4) && (b == 3); // false and false
	cout << hasil << endl;
	hasil = (a == 3) && (b == 5); // false and true
	cout << hasil << endl;
	
	// or: salah satu nilai true maka hasil true
	cout << "untuk or \n";
	hasil = (a == 5) or (b == 5); // true or true
	cout << hasil << endl;
	hasil = (a == 5) || (b == 4); // true or false
	cout << hasil << endl;
	hasil = (a == 4) or (b == 3); // false or false
	cout << hasil << endl;
	hasil = (a == 3) || (b == 5); // false or true
 	cout << hasil << endl;
	
	cin.get();
	return 0;
}

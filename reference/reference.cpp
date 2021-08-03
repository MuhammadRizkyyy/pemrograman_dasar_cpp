#include <iostream>
using namespace std;

int main(){
	int a = 5;
	
	cout << "address dari a: " << &a << endl;
	cout << "  nilai dari a: " << a << endl << endl;
	
	int &b = a;
	cout << "address dari b: " << &b << endl;
	cout << "  nilai dari b: " << b << endl << endl;
	
	b = 10;
	cout << "address dari a: " << a << endl;
	cout << "  nilai dari b: " << b << endl << endl;
	
	a = 25;
	cout << "address dari a: " << a << endl;
	cout << "  nilai dari b: " << b << endl;
	
	return 0;
}

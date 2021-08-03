#include <iostream>
using namespace std;

int main(){
	
	int a = 4;
	int b = 5;
	
	bool hasil1, hasil2;

	hasil1 = (a == b);
	hasil2 = (a != b);
	hasil1 = (a < b);
	hasil2 = (a > b);
	hasil1 = (a <= b);
	hasil2 = (a >= b);
	
	cout << "untuk hasil 1 \n";
	cout << hasil1 << endl;
	cout << "untuk hasil 2 \n";
	cout << hasil2 << endl;

	cin.get();
	return 0;
}

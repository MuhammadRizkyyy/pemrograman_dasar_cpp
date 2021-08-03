#include <iostream>
using namespace std;

int main(){
	
	int a;
	cout << "awal program 1\n";
	for(a = 1; a < 10; a++){
		cout << a << endl;
	}
	cout << "akhir program 1\n\n";
	
	// atau
	cout << "awal program 2 \n";
	for(int b = 2; b < 7; b++){
		cout << "hola " << b << endl;
	}
	cout << "akhir program 2\n\n" << endl;
	
	// atau
	cout << "awal program 3" << endl;
	int total = 0;
	for(int c = 1; c < 10; c++){
		total += 1;
		cout << c << " || " << total << endl;
	}
	cout << "akhir program" << endl;
	
	return 0;
}

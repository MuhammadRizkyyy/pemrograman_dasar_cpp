#include <iostream>
using namespace std;

void fungsi(int &b);
void kuadrat(int &nilaiRef);

int main(){
	int a = 5;
	cout << "addres a: " << &a << endl;
	cout << "nilaii a: " << a << endl;

	// fungsi(a);
	kuadrat(a);
	cout << "nilaii a: " << a << endl;

	return 0;
}

void fungsi(int &b){
	b = 10;
	cout << "addres b: " << &b << endl;
	cout << "nilai  b: " << b << endl;
}

void kuadrat(int &nilaiRef){
	nilaiRef = nilaiRef * nilaiRef;
}
#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int a;
	int b;
	int c;
	
	a = (b = 1, c = 2, (b + c));

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	
	int a = 5;
	cout << "Nilai awal dari a adalah 5 " << endl;
 	
 	// variabel operator ekspresi 
 	//    a      +=        3
 	
	a += 3;
	cout << "Ditambah 3 menjadi: " << a <<  endl;
	
	a -= 3;
	cout << "Dikurang 3 menjadi: " << a << endl;
	
	a *= 3;
	cout << "Dikali 3 menjadi: " << a << endl;
	
	a /= 3;
	cout << "Dibagi 3 menjadi: " << a << endl;
	
	a %= 3;
	cout << "Dimodulus 3 menjadi: " << a << endl;
	
	return 0;
}

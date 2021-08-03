#include <iostream>
using namespace std;

int main(){
	int a = 5;
	
	// pointer
	int *aptr = &a;
	// int a mempunyai nilai dan address (alamat)

	cout << "nilai dari a: " << a << endl;
	cout << "alamat dari a: " << aptr <<  endl;
	
	// dereferencing, mengambil data dari sebuah pointer
	cout << "Mengambil nilai dari pointer aptr: " << *aptr << endl;
	
	
	return 0;
}

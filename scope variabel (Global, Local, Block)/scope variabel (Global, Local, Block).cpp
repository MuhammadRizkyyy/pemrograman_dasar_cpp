#include <iostream>
using namespace std;

int x = 10; // variabel global

int ambil_global(){
	return x; // mengambil variabel global
}

int x_local(){
	int x = 5; // variabel local scopenya x_local()
	return x;
}
int main(){
	
	cout << "1. Variabel global : " << x <<  endl;
	int x = 8;
	cout << "2. variabel local main : " << x <<  endl;
	cout << "3. Variabel ambil_global : " << ambil_global() << endl;
	cout << "4. Variabel local_main : " << x << endl;
	cout << "5. Variabel x_local : " << x_local() << endl;
	cout << "6. Variabel local main : " << x << endl;
	
	cout << "7. Variabel local main : " << x << endl;
	{
		cout << "8. Variabel local main : " << x << endl;
		// block scope
		int x = 3;
		cout << "9. Variabel local block : " << x << endl;
		cout << "10. Variabel global : " << ambil_global() << endl; // ambil_global bisa diganti dgn ::x bergungsi untuk mengambil x yg paling jauh
	}
	cout << "11. Variabel local main : " << x << endl;
	
	return 0;
}

#include <iostream>
#include <array>
using namespace std;

int main(){
//	membuat array dengan mneggunakan standard library
// array <int, jumlah array> nama array
	array <int, 5> nilai;
	
	for(int i = 0; i <= 4; i++){
		nilai[i] = i;
		cout << "Nilai [" << i << "] = " << nilai[i] << " address : " << &nilai[i] << endl; 
	}
	cout << endl;
//	ukuran array
	cout << "Ukuran : " << nilai.size() << endl;
//	address awal dari array
	cout << "address awal : " << nilai.begin() << endl;
//	address akhir dari array
	cout << "address akhir : " << nilai.end() << endl;
//	nilai dengan index
	cout << "nilai ke 2 : " << nilai.at(2) << endl;
	
	return 0;
}

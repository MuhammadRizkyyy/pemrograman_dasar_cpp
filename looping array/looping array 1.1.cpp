#include <iostream>
#include <array>
using namespace std;

int main(){
	
	/* for(deklarasi variabel : array){
			stateman
		}*/
		
	array <int, 10> arrayNilai= {0,1,2,3,4,5,6,7,8,9};
	
	for(int nilai : arrayNilai){
		cout << "address : " << &nilai << " nilainya : " << nilai << endl;
		nilai= 1; // tidak merubah array
	}
	
	cout << endl;
	//	memanipulasi array dengan menggunakan referensi
	for(int &nilaiRef: arrayNilai){
		nilaiRef *= 2;
	}
	
	cout << endl;
	for(int &nilaiRef: arrayNilai){
		cout << "address : " << &nilaiRef << " nilainya : " << nilaiRef << endl;
	}
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string kalimat("Jajang suka makan karena memang hobinya");
	cout << kalimat << endl << endl;
	cout << "Masukkan kata untuk mengetahui posisi index dari string diatas: " << endl;
	
	while(true){
		string i;
		cin >> i;
		
		cout << i << " adalah urutan ke: " << kalimat.find(i) << endl;
		cout << "Masukkin lagi: ";
	}
	
	
	return 0;
}

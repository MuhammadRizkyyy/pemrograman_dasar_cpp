// jika tidak ada break maka bagian bawah juga ikut di eksekusi
#include <iostream>
using namespace std;

int main(){
	
	int a;
	
	cout << "Masukkan nomor: ";
	cin >> a;
	
	switch (a){
		case 5:
			cout << "Ini adalah angka 5" << endl;
			break;
		case 4:
			cout << "Ini adalah angka 4" << endl;
		case 3:
			cout << "Ini adalah angka 3" << endl;
		case 2:
			cout << "Ini adalah angka 2" << endl;
		case 1:
			cout << "Ini adalah angka 1" << endl;
		default:
			cout << "Maaf, nomor tidak tertera di data kami" << endl;
	}
	cout << "Terimakasih telah mengunakan program kami " << endl;
	return 0;
}

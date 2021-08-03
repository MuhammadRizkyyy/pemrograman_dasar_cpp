#include <iostream>
using namespace std;

int main(){
	
	char nilai;
	
	cout << "Masukkan nilai anda (A-E): ";
	cin >> nilai;
	
	switch (nilai){
		case 'A':
		cout << "Pertahankan" << endl;
		break;
		
		case 'B':
		cout << "Harus le bih baik lagi" << endl;
		break;
		
		case 'C':
		cout << "Perbanyak belajar" << endl;
		break;
		
		case 'D':
		cout << "Jangan keseringan naik" << endl;
		break;
		
		case 'E':
		cout << "Kebanyakan bolos" << endl;
		break;
		
		default:
		cout << "Maaf, nilai yang anda masukkan salah" << endl;
	}
	return 0;
}

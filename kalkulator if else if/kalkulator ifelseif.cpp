// ini kalkulator versi gue
#include <iostream>
using namespace std;

int main(){
	
	float a,b,hasil;
	char aritmatika;
	
	cout << "Selamat datang di calculator Rizky \n \n";
	cout << "Masukkan angka pertama: ";
	cin >> a;
	cout << "Pilih operator (+, -, /, *): ";
	cin >> aritmatika;
	cout << "Masukkan angka ke dua: ";
	cin >> b;
	
	cout << "\nHasil perhitungan: ";
	cout << a << aritmatika << b;
	
	if (aritmatika =='+'){
		hasil = a + b;
	}else if (aritmatika == '-'){
		hasil = a - b;
	}else if (aritmatika == '/'){
		hasil = a / b;
	}else if (aritmatika == '*'){
		hasil = a * b;
	}else {
		cout << "Maaf, operator yang anda masukkan salah";
	}
	
	cout << " = " << hasil << endl;
	cout << "Terima kasih telah menggunakan program Rizky";
	return 0;
}

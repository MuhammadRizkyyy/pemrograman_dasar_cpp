#include <iostream>
using namespace std;

// fungsi menghitung luas persegi panjang
double hitung_luas(double p, double l){
	double luas = p * l; // bisa juga langsung dengan cara: return p * l;
	return luas;
}

// fungsi menghitung keliling persegi panjang
double hitung_keliling(double p, double l){
	double keliling = 2 * (p + l);
	return keliling;
}

void tampilkan_luas(double p, double l){
	cout << "Menggunakan void: \n";
	cout << "Luasnya adalah: ";
	cout << hitung_luas(p, l) << endl;
}
void tampilkan_keliling(double p, double l){
	cout << "Menggunakan void \n";
	cout << "Kelilingnya adalah: ";
	cout << hitung_keliling(p, l) << endl;
}
int main(){
	
	double panjang, lebar;
	
	cout << "Masukkan panjang: ";
	cin >> panjang;
	cout << "Masukkan lebar: ";
	cin >> lebar;
	
	tampilkan_luas(panjang, lebar);
	tampilkan_keliling(panjang, lebar);
	
	cin.get();
	return 0;
} 

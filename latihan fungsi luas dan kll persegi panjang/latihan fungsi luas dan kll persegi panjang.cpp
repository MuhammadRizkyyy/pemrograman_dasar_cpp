#include <iostream>
using namespace std;

// fungsi menghitung luas persegi panjang
double hitung_luas(double p, double l){
	double luas = p * l;
	return luas;
}

// fungsi menghitung keliling persegi panjang
double hitung_keliling(double p, double l){
	double keliling = 2 * (p + l);
	return keliling;
}

int main(){
	
	double panjang, lebar;
	
	cout << "Masukkan panjang: ";
	cin >> panjang;
	cout << "Masukkan lebar: ";
	cin >> lebar;
	
	cout << "luasnya adalah: ";
	cout << hitung_luas(panjang, lebar) << endl;
	cout << "Kelilingnya adalah: ";
	cout << hitung_keliling(panjang, lebar) << endl;
	
	cin.get();
	return 0;
} 

#include <iostream>
#include <string>
using namespace std;

struct buah{
	string warna;
	float berat;
	int harga;
	string rasa;
};

int main(){
	buah apel;
	buah jeruk;
	
	apel.warna = "Merah";
	apel.berat = 250.50;
	apel.harga = 50000;
	apel.rasa = "Manis kesat";
	
	jeruk.warna = "Orange"; 
	jeruk.berat = 150.5;
	jeruk.harga = 20000;
	jeruk.rasa = "Asam";
	
	cout << "Apel" << endl;
	cout << apel.warna << endl;
	cout << apel.berat << endl;
	cout << apel.harga << endl;
	cout << apel.rasa << endl;
	
	cout << endl;
	cout << "Jeruk" << endl;
	cout << jeruk.warna << endl;
	cout << jeruk.berat << endl;
	cout << jeruk.harga << endl;
	cout << jeruk.rasa << endl;
	
	return 0;
}

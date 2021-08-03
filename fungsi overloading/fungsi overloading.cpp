#include <iostream>
using namespace std;

// overloading = menimpa
int luas_kotak(int panjang, int lebar){
	int luas = panjang * lebar;
	return luas;
}

// overloading fungction
int luas_kotak(int sisi){
	int luas = sisi * sisi;
	return luas;
}

double luas_kotak(double sisi){
	double luas = sisi * sisi;
	return luas;
}

int main(){

	cout << "Luas kotak 2x3: " << luas_kotak(2,3) << endl;
	cout << "Luas kotak 2x2: " << luas_kotak(5) << endl;
	cout << "Luas kotak 3.44: " << luas_kotak(3.44) << endl;
	
	return 0;
}


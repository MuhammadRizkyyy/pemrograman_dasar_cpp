#include <iostream>
using namespace std;

// fungsi input pertama
int kuadrat(int x){
	int y;
	y = x * x;
	return y;
}

// fungsi input kedua
int tambah(int a, int b){
	int c;
	c = a + b;
	return c;
}

int main(){
	
	int input, hasil, a, b, hasil2;
	
	// input pertama
	cout << "Nilai kuadrat dari: ";
	cin >> input;
	
	hasil = kuadrat(input);
	cout << hasil << endl;
	
	// input kedua
	cout << "Masukkan nilai a: ";
	cin >> a;
	cout << "Masukkan nilai b: ";
	cin >> b;
	cout << "Hasillnya adalah: ";
	
	hasil2 = tambah(a,b);
	cout << hasil2 << endl;
	
	return 0;
}

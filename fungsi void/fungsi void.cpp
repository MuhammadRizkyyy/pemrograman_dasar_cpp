#include <iostream>
using namespace std;

// fungsi input pertama
int kuadrat(int x){
	int y;
	y = x * x;
	return y;
}

// fungsi void
void menampilkan(int input){
	cout << "Menampilkan void: \n";
	cout << input << endl;
}

int main(){
	
	int input, hasil, a, b, hasil2;
	
	// input pertama
	cout << "Nilai kuadrat dari: ";
	cin >> input;
	
	hasil = kuadrat(input);
	cout << hasil << endl;
	
	// fungsi void
	menampilkan(hasil);
	return 0;
}

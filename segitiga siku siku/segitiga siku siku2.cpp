#include <iostream>
using namespace std;

int main(){
	
	int n;
	
	cout << "Masukkan panjang pola: \n";
	cin >> n;
	
	cout << "Pola 5 \n";
	for(int x = 1; x <= n; x++){
		for(int y = n; y > x; y--){
			cout << " ";
		}
		for(int z = 1; z <= (2*x-1); z++){ // cara lain < x * 2
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "Pola 6 \n";
	for(int e = 1; e <= n; e++){
		for(int f = 1; f < e; f++){
			cout << " ";
		}
		for(int g = n; g >= (2*e-n); g--){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "Pola 7 \n";
	for(int x = 1; x <= n; x++){
		for(int y = n; y > x; y--){
			cout << " ";
		}
		for(int z = 1; z <= (2*x-1); z++){
			cout << "*";
		}
		cout << endl;
	}
	for(int e = 2; e <= n; e++){
		for(int f = 1; f < e; f++){
			cout << " ";
		}
		for(int g = n; g >= (2*e-n); g--){
			cout << "*";
		}
		cout << endl;
	}
	
	cin.get();
	return 0;
}


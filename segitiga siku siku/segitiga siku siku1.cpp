#include <iostream>
using namespace std;

int main(){
	
	int n;
	
	cout << "Masukkan panjang pola: \n";
	cin >> n;
	cout << "pola 1" << endl;
	
	for(int a = 1; a <= n; a++){
		for(int b = 1; b <= a; b++){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "Pola 2 \n";
	
	for(int c = 1; c <= n; c++){
		for(int d = n; d >= c; d--){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "Pola 3 \n";
	for(int e = 1; e <= n; e++){
		for(int f = 1; f < e; f++){
			cout << " ";
		}
		for(int g = n; g >= e; g--){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "Pola 4 \n";
	for(int x = 1; x <= n; x++){
		for(int y = n; y > x; y--){
			cout << " ";
		}
		for(int z = 1; z <= x; z++){
			cout << "*";
		}
		cout << endl;
	}
	
	cin.get();
	return 0;
}

#include <iostream>
#include <cstdlib> // mengandung fungsi random
using namespace std;

int main(){
	
	char lanjut;
	
	while(true){
		cout << "Mau lempar dadu? (y/t): ";
		cin >> lanjut;
		
		if(lanjut == 'y'){
			cout << 1 + (rand() % 6) << endl; // rand = random
		}else if(lanjut == 't'){
			break;
		}else{
			cout << "Masukkan y atau t dong jangan yang lain!! \n";
		}
	}
	return 0;
}

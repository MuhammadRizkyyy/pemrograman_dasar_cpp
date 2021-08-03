#include <iostream>
using namespace std;

int main(){
	
	int a;
	cout << "masukkan nomer yang anda pilih: ";
	cin >> a;
	
	if (a == 2){
		cout << "nomer ini adalah 2" << endl;
	}else if (a == 3){
		cout << "nomer ini adalah 3" << endl;
	}else if (a == 4){
		cout << "nomer ini adalah 4" << endl;
	}else if (a == 7){
		cout << "nomer ini adalah 7" << endl;
	}else {
		cout << "nomer yang anda pilih bukan 1,5,6,7,dst" << endl;
	}

	cout << "Terimakasih" << endl;
	return 0;
}

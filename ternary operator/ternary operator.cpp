#include <iostream>
#include <string>
using namespace std;

// ternary operator = ?
// kondisi ? hasil1 : hasil2

int main(){
	int a, b;
	string hasil1, hasil2, output;
	
	hasil1 = "otong";
	hasil2 = "ucup";
	
	a = 5;
	cout << "masukkan angka: ";
	cin >> b;
	
	// ternary operator
	output = (a < b) ? hasil1 : hasil2;

	// cara lain 1
//	if(a < b){
//		cout << hasil1 << endl;
//	}else{
//		cout << hasil2 << endl;
//	}
	
	// cara lain 2
//	if(a < b){
//		output = hasil1;
//	}else{
//		output = hasil2;
//	}
	
	cout << output << endl;
	
	return 0;
}

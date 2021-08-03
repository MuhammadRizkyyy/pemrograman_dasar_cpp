#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string kata("cat");
	
	// menampilkan data string
	cout << kata << endl;
	
	// mengambil karakter berdasarkan index
	cout << "mengambil index kata ke 0: " << kata[0] << endl;
	cout << "mengambil index kata ke 1: " << kata[1] << endl;
	cout << "mengambil index kata ke 2: " << kata[2] << endl;

	// mengubah karakter pada index
	kata[2] = 'k';
	cout << kata << endl;
	
	// menyambung, concatenation
	string kata2(kata + "ke");
	cout << kata2 << endl;
	
	string kata3("enak");
	kata2.append(" " + kata3);
	cout << kata2 << endl;
	
	string kata4("cokkkkk!!!!!!");
	kata3 += " " + kata4;
	cout << kata3 << endl;
	
	
	return 0;
}

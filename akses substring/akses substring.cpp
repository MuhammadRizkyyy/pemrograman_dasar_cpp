#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string kalimat1("Jajang suka makan karena memang hobinya");
	string kalimat2("Asep bau karena jarang mandi");
	
	cout << "1. " << kalimat1 << endl;
	cout << "2. " << kalimat2 << endl;
	
	// substring, mengambil string di tengah-tengah
	// substr(index,panjang)
	cout << kalimat1.substr(12,5) << endl;
	cout << kalimat2.substr(5,3) << endl;
	
	// mencari posisi dari substring
	cout << "Posisi makan: ";
	cout << kalimat1.find("makan") << endl;
	cout << "Posisi bau: ";
	cout << kalimat2.find("bau") << endl;
	
	int a = kalimat1.find("ng");
	cout << a << endl;
	cout << kalimat1.find("ng", a + 1) << endl; 
	
	// mencari posisinya dari belakang -> rfind
	cout << kalimat2.rfind("ng") << endl;
	
	return 0;
}

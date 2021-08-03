#include <iostream>
using namespace std;

struct kelompok_bilangan{
	int bulat;
	float pecahan;
};

int main(){
	kelompok_bilangan bilangan;
	
	bilangan.bulat = 7;
	bilangan.pecahan = 7;
	
	cout << "Nilai awal bilangan bulat: " << bilangan.bulat << endl;
	cout << "Nilai awal bilangan pecahan: " << bilangan.pecahan << endl;
	cout << "=============================" << endl;
	
	bilangan.bulat /= 2;
	bilangan.pecahan /= 2;
	
	cout << "Nilai bilangan bulat setelah di bagi 2: " << bilangan.bulat << endl;
	cout << "Nilai bilangan pecahan setelah di bagi 2: " << bilangan.pecahan << endl;
	
	
	return 0;
}

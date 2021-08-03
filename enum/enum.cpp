#include <iostream>
using namespace std;

enum warna {merah, putih, hitam, coklat /*= 5*/, kuning, biru};


int main(){
	
	warna kain;
	
	kain = hitam;
	
	if(kain == hitam){
		cout << "Warna kainnya hitam" << endl;
	}
	cout << kain << endl;
	
	
	return 0;
}

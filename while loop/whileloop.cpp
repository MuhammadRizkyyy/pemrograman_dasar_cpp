// jika tidak ada increment maka outputnya akan looping terus
// perbedaan while dengan do while adalah while syarat dlu baru aksi sedangkan do while aksi dlu baru sayarat
#include <iostream>
using namespace std;

int main(){
	
	int a = 1;
	
	/* while(syarat){
 	 AKSI;
	 }*/

	while(a < 10){
		cout << "hola " << a << endl;
	a++;	
	}
	
	cout << "selesai" << endl;
	
	cin.get();
	return 0;
}

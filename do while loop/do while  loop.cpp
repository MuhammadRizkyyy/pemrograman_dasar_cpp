// jika tidak ada increment maka output jelan terus
// perbedaan dari while yaitu kalo d while aksi dulu baru syarat sedangkan while syarat dlu baru aksi
#include <iostream>
using namespace std;

int main(){
	
	int a = 1;
	/* do{aksi
	}while(syarat);
	*/
	
	do{
		cout << "hola " << a << endl;
		a++;
	}while(a < 10);
	
	cout << "selesai" << endl;
	
	return 0;
}

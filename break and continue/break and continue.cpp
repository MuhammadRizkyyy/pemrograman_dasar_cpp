#include <iostream>
using namespace std;

int main(){
	
	// break
	for(int a = 1; a < 10; a++){
		if(a == 6){
			break;
		}
		cout << a << endl;
	}
	cout << "akhir program\n\n" << endl;
	
	// continue
	for(int b = 0; b < 10; b++){
		if(b == 5){
			continue;
		}
		cout << b << endl;
	}
	cout << "akhir program\n\n";
	
	return 0;

/*
 // soal pas pemrograman dasar juni
#include <iostream>
using namespace std;

int main(){
	
	string a="ini looping for:";
	int i=0;
	int l=0;
	
	cout << "Masukkan nilai mulai" << endl;
	cin >> i;
	cout << "Masukkan jumlah pengulangan" << endl;
	cin >> l;
	cout << "Looping di mulai" << endl;
	do{
		cout << a << i << endl;
		i++;
	}while (i > 0 && i <= l);
	
	cout << endl << "pengulangan selesai" << endl;
	
	
	
	return 0;
}
*/
}

#include <iostream>
#include <array>


using namespace std;

// 1. syntax eror
// 2. linking eror
// 3. non-eror
// 4. runtime eror

// int kuadrat(int &value);
// int luas(int &panjang, int lebar);

int pembagian(int &num, int &denum){
	if(denum == 0){
//		throw overflow_eror("Eror: Pembagi nol");
		throw "Eror: Pembagi nol";
	}
	return num/denum
;}

int main(){
	int a;
	int b;
	int c;
	char is_lanjut;
	
	while(true){
		cout << "num: ";
		cin >> a;
		cout << "denum: ";
		cin >> b;


		try{
			c = pembagian(a,b);
			cout << c << endl;
		}catch(const char* e){
//		}catch(exception &e){
//			cout << e.what() << endl;
			cout << e << endl;
		}
		cout << "lanjutkan(y/n): ";
		cin >> is_lanjut;
		
		if(is_lanjut == 'n' || is_lanjut == 'N'){
			cout << "akhir dari program" << endl;
			break;
		}
	}













	// int a = 10;
	// int b = 5;
	// int c = luas(a,b);

	// cout << c << endl;

	return 0;
}

// int kuadrat(int &value){
// 	return value * value;
// }
// int luas(int &panjang, int lebar){
// 	return panjang * lebar;
// }

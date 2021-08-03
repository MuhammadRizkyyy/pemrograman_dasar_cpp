#include <iostream>
using namespace std;

int main(){
	
	// f_n = f_n1 + f_n2
	int n;
	int f_n;
	int f_n1;
	int f_n2;
	
	cout << "Program deret fibonacci" << endl;
	cout << "Masukkan bilangan n: ";
	cin >> n;
	
	f_n1 = 1;
	f_n2 = 0;
	cout << f_n2 << " ";
	cout << f_n1 << " ";
	for(int a = 1; a < n; a++){
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		cout << f_n << " ";
	}
	cout << endl;
	
	cin.get();
	return 0;
}

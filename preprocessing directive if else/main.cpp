#include <iostream>

#define ID 0

#if ID == 5
	#define LANG "Indonesia" 
#else
	#define LANG "English"
#endif


using namespace std;


int main(){

	cout << "Bahasa dipilih: " << LANG << endl;

	return 0;
}
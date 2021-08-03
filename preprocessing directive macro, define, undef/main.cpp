// preprocessing directive
#include <iostream>

// merubah nilai dengan nama
#define PI 3.14159265359
#define BAHASA "Indonesia"

// macro untuk fungsi
#define KUADRAT(X) (X*X)
#define MAX(A,B) ((A > B) ? A:B)

// akhir dari preprocessing directive

using namespace std;

int main(){
	cout << "niali PI: " << PI << endl;
	cout << "bahasa: " << BAHASA << endl;
	cout << "kuadrat: " << KUADRAT(6) << endl;
	cout << "max: " << MAX(5,4) << endl;

	#undef BAHASA 
	#define BAHASA "Inggris"
	cout << BAHASA << endl;
	return 0; 
}

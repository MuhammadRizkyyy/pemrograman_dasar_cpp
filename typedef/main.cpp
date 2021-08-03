#include <iostream>

using namespace std;

int main(){

	// typedef adalah memberikan alias untuk tipedata

	typedef int I;
	typedef int iVector2D[2];
	typedef unsigned long ulong;
	typedef double vector[2];
	typedef float flt;
	typedef char chr;

	using numbers = double;
	using kalimat = string;

	I a = 10;
	iVector2D b = {1,2};
	ulong c = 2431435;
	vector d = {10.342, 15.8964};
	numbers e = 10.428;
	flt f = 5.2; 
	chr g = 'a';
	kalimat kal = "ucup";

	cout << "nilai a: " << a << endl;
	cout << "nilai b: " << b << endl;
	cout << "nilai c: " << c << endl;
	cout << "nilai d: " << d << endl;
	cout << "nilai e: " << e << endl;
	cout << "nilai f: " << f << endl;
	cout << "nilai g: " << g << endl;

	cout << "kalimat: " << kal << endl;

	return 0;
}

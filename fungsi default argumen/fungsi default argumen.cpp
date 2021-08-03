#include <iostream>
using namespace std;

double volume_balok(double p = 1, double l = 1, double t = 1);

int main(){
	cout << "1. Volume balok: " << volume_balok(2,2,3) << endl;	
	cout << "2. Volume balok: " << volume_balok(3,5) << endl; // tanpa t
	cout << "3. volume balok: " << volume_balok(3) << endl; // tanpa l
	cout << "4. volume balok: " << volume_balok() << endl; // tanpa p, l, t
	return 0;
}
double volume_balok(double p, double l, double t){
	return p * l * t;
}

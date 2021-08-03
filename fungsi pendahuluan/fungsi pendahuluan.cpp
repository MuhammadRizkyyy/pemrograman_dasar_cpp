#include <iostream>
#include <cmath> // library cmath
using namespace std;

/*
Library cmath :
ceil(x)		<- pembulatan ke atas
cos(x)		<- cosinus
exp(x)		<- eksponen
fabs(x)		<- nilai absolut dalam float
floor(x)	<- pembulatan ke bawah
fmod(x)		<- modulus dalam float
log(x)		<- logaritma dengan basis natural
log10(x) 	<- logaritma dengan basis 10
pow(x,y) 	<- x pangkat y
sin(x) 		<- sinus
sqrt(x)		<- akar kuadrat
tan(x)		<- tangen
*/

int main(){
	
	int x,y;
	
	cout << "masukkan nilai: ";
	cin >> x;
	cout << "masukkan pangkat: ";
	cin >> y;
	cout << "Hasillnya: "<< pow(x,y) << endl; // () <- daerah input 
	
	return 0;
}


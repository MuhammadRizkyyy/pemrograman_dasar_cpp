#include <iostream>
#include <string>

using namespace std;

template<typename T>
void print(T data){
	cout << data << endl;
}

template<typename T>
void toInt(T data){
	cout << int(data) << endl;;
}

template<typename T, typename U>
T max(T a, U b){
	return (a > b) ? a : b;
}  


int main(){
	
	print(5);
	print(5.8);
	print('c');

	(toInt(10.1010101010));
	cout << max(10,103.5) << endl;

	print<int>(10.15);
	cout << max<double,int>(11.1,12) << endl;

	return 0;
}

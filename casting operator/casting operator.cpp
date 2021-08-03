#include <iostream>
using namespace std;

int main(){
	
	int a = 5;
	float b = 6.67; 
	char c = 'd';
	
	cout << a + (int)b << endl;
	
	cout << (int)c << endl;
	cout << c + a << endl;
	
	cout << (char)(c + a )<< endl;
	
	return 0;
}

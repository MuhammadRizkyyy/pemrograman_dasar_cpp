#include <iostream>
using namespace std;

union nama{
	int int_value;
	char char_value[4];
};

int main(){
	nama otong;
	
	otong.int_value = 12345642;
	
	cout << "Data int_value: " << otong.int_value << endl;
	cout << "Data char_va;ue: " << otong.char_value << endl;
	
	otong.char_value[0] = 'a';
	otong.char_value[1] = 'b';
	otong.char_value[2] = 'c';
	otong.char_value[3] = 'd';
	
	cout << endl;
	cout << "Data int_value: " << otong.int_value << endl;
	cout << "Data char_va;ue: " << otong.char_value << endl;
	
	return 0;
}

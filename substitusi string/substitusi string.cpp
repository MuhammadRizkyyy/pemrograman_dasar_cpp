#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string kalimat1("aku siapa kamu siapa");
	string kalimat2("wakanda forevah!!");
	
	cout << "1. " << kalimat1 << endl;
	cout << "2. " << kalimat2 << endl << endl;
	
//	swap string
	cout << "swap string" << endl;
	kalimat2.swap(kalimat1);
	cout << "1. " << kalimat1 << endl;
	cout << "2. " << kalimat2 << endl << endl;
	
//	replace, mengganti string
	cout << "replace string" << endl;
	kalimat1.replace(8,7,"forever");	
	cout << "1. " << kalimat1 << endl;
	cout << "2. " << kalimat2 << endl << endl;
	
//	insert string
	cout << "insert string" << endl;
	kalimat1.insert(8,"dan hatiku ");
	cout << "1. " << kalimat1 << endl;
	cout << "2. " << kalimat2 << endl << endl;
	
	return 0;
}

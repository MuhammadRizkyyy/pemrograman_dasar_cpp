#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream myFile;
	string output, buffer;
	bool isData = false;
	int no;
	string nama;
	
	myFile.open("data_latihan1.txt");
	
	while(!isData){
		getline(myFile,buffer);
		cout << buffer << endl;
		if(buffer == "keluarga"){
			isData = true;
		}
	}
	cout << output << endl;
	
	
	getline(myFile,buffer);
	cout << buffer << endl;
	while(!myFile.eof()){
		myFile >> no;
		myFile >> nama;
		
		cout << no << "\t" << nama << endl;
	}
	
	
	
	
	
	return 0;
}

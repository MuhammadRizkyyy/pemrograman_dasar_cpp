#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream myFile;
	string output, buffer;
	bool isData = false;
	string barang;
	int harga;
	int no;
	
	
	myFile.open("data_latihan.txt");
	
	while(!isData){
		getline(myFile,buffer);
		output.append("\n" + buffer);
		if(buffer == "Stok"){
			isData = true;
		}
	}
	cout << output << endl;
	
	
	
	getline(myFile,buffer);
	cout << buffer << endl;
	int jumlah_barang = 0;
	while(!myFile.eof()){
		myFile >> no;
		myFile >> barang;
		myFile >> harga;
		
		cout << no << "\t" << barang << "\t" << harga << endl;
		jumlah_barang++;
	}
	cout << "Jumlah barang: " << jumlah_barang << endl;
	
	return 0;
}

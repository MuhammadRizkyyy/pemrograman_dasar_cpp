#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream myFile;
    int number = 12345;
	
	//ios::in = membaca file
	
    myFile.open("data.bin", ios::out | ios::binary);
   	myFile.write(reinterpret_cast<char*>(&number), sizeof(number));
    myFile.close();

    return 0;
}

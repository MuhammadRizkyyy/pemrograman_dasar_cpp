#include <iostream>
using namespace std;

enum namaPresiden { 
    Soekarno, 
    Soeharto, 
    Habibie, 
    Megawati, 
    Gusdur, 
    SBY, 
    Jokowi
};

int main()
{
    namaPresiden presiden;
    presiden = Habibie;
    cout << "Presiden Indonesia ke-" << presiden + 1;
    return 0;
}

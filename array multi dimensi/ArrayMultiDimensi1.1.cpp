#include <iostream>
using namespace std;

const int MAX_ROW = 3;
const int MAX_COL = 3;

int main ()
{
    string nama[MAX_ROW][MAX_COL]={
        {"joko", "dadang", "aziz"},
        {"fajar", "nick"},
        {"laksono", "eren"}
    };

    for(int i=0;i<MAX_ROW;++i){
        for(int j=0;j<MAX_COL;++j){
            cout<<"["<<(i+1)<<"]["<<(j+1)<<"]. "<<nama[i][j]<<endl;
        }
    }

    return 0;
}

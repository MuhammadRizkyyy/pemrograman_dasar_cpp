#include <iostream>
using namespace std;

int main(){
	int angka[3];
	int jumlah, max, min, jawaban, temp, x;
	double a, b, c, rata_rata, input;
	
	cout << "Masukkan tiga buah angka: " << endl;
	cout << "Nilai A: ";
	cin >> a;
	cout << "Nilai B: ";
	cin >> b;
	cout << "Nilai C: ";
	cin >> c;
	cout << endl;
	
//	tinggal mencari ascending dan descending

//	for(int i=0; i<9; i++)
//   {
//       for(int j=i+1; j<3; j++)
//      {
//          if(data[i]>data[j])
//         {
//             temp = data[i];
//            data[i] = data[j];
//            data[j] = temp;
//         }
//      }
//   }
//	cout << "Urutan nilai Ascending: ";
//	for(int i=0; i<3; i++)
//   {
//       cout<<data[i]<<" ";
//   }

	if ( a > b && a > c )
        cout << "Nilai MAX: " << a << endl;
    else if ( b > a && b > c )
        cout << "Nilai MAX: " << b << endl;
    else
        cout << "Nilai MAX: " << c << endl;
		
	if ( a < b && a < c )
        cout << "Nilai MIN: " << a << endl;
    else if ( b < a && b < c )
        cout << "Nilai MIN: " << b << endl;
    else
        cout << "Nilai MIN: " << c << endl;
        
	rata_rata = (a + b + c) / 3;	
	cout << "Nilai RATA-RATA: " << rata_rata << endl;	


	return 0;
}

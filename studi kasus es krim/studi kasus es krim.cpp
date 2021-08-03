#include <iostream>
using namespace std;

int main(){
	string nama, pesanan;
	int kode, harga, jumlah, total, bayar, kembali;
	do{
	cout << "	SELAMAT DATANG DI TOKO ES KRIM KAMI		" << endl;
	cout << "=======================================================" << endl << endl;
	cout << "Masukkan nama pembeli: ";
	cin >> nama;
	cout << "Menu makanan     Harga" << endl;
	cout << "1. COKLAT        5.000" << endl;
	cout << "2. VANILA        6.000" << endl;
	cout << "3. DURIAN        8.000" << endl;
	cout << "Masukkan pilihan anda: ";
	cin >> kode;
	
	switch(kode){
		case 1:
			cout << "COKLAT" << endl;
			harga = 5000;
			cout << "Masukkan jumlah: ";
			cin >> jumlah;
			total = harga * jumlah;
			cout << "Total harganya yaitu: Rp." << total << endl;
			cout << "Dibayar: Rp.";
			cin >> bayar;
			kembali = bayar - total;
			cout << "Kembali: Rp." << kembali << endl;
			cout << "Masih ada pesanan? (Y/T): ";
			cin >> pesanan;
			break;
		case 2: 
			cout << "VANILA" << endl;
			harga = 6000;
			cout << "Masukkan jumlah: ";
			cin >> jumlah;
			total = harga * jumlah;
			cout << "Total harganya yaitu: Rp." << total << endl;
			cout << "Dibayar: Rp, ";
			cin >> bayar;
			kembali = bayar - total;
			cout << "Kembali: Rp." << kembali << endl;
			cout << "Masih ada pesanan? (Y/T): ";
			cin >> pesanan;
			break;
		case 3:
			cout << "DURIAN" << endl;
			harga = 8000;
			cout << "Masukkan jumlah: ";
			cin >> jumlah;
			total = harga * jumlah;
			cout << "Total harganya yaitu: Rp." << total << endl;
			cout << "Dibayar: Rp.";
			cin >> bayar;
			kembali = total - bayar;
			cout << "Kembali: Rp." << kembali << endl;
			cout << "Masih ada pesanan? (Y/T): ";
			cin >> pesanan;
			break;
		default:
			cout << "Kode yang anda masukkan tidak ada";	
	}
	}
	while (pesanan == "Y");
	cout << "Terima kasih atas kunjungan anda";
	return 0;
}


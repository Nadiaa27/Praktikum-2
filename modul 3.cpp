#include <iostream>
using namespace std;

int main() {

	double harga, diskon, jumlahdiskon, hargasetelahdiskon, hargasebelumdiskon;

	cout << " Masukkan harga barang (Rp)=";
	cin >> harga;

	cout << "diskon barang (%)=";
	cin >> diskon;

	jumlahdiskon = harga * (diskon / 100);
	hargasetelahdiskon = harga - jumlahdiskon;
	hargasebelumdiskon = harga;

	cout << "hasil:" << endl;
	cout << "Harga sebelum diskon = RP " << hargasebelumdiskon << endl;
	cout << "Jumlah Diskon (%)=" << jumlahdiskon << endl;
	cout << "Harga setelah diskon = RP " << hargasetelahdiskon << endl;

	return 0;

}

#include <iostream>

using namespace std;

int main()
{
	double nilai;

	cout << "Program penentuan nilai mutu" << endl;
	cout << "Masukkan nilai angka : ";
	cin >> nilai;

	cout << "\nHasil  : " << endl;

	if (nilai > 89) {
		cout << "Nilai : A" << endl;
		cout << "Naik Kelas" << endl;
	}
	else if (nilai > 80 && nilai <= 89) {
		cout << "Nilai : B" << endl;
		cout << "Naik Kelas" << endl;
	}
	else if (nilai > 70 && nilai <= 80) {
		cout << "Nilai : C" << endl;
		cout << "Naik Kelas" << endl;
	}
	else if (nilai > 60 && nilai <= 79) {
		cout << "Nilai : D" << endl;
		cout << "Tinggal Kelas" << endl;
	}
	else if (nilai <= 60) {
		cout << "Nilai : E" << endl;
		cout << "Tinggal Kelas" << endl;
	}
	return 0;
}
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string baris;
	string NamaFile;

	cout << "Masukkna Nama file :";
	cin >> NamaFile;

	ofstream outfile;
	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">= Menulis file, \'q\' utuk keluar" << endl;

	while (true) {

	}
}


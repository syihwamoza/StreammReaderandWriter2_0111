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
		cout << "- ";
		getline(cin, baris);
		if (baris == "q") break;
		outfile << baris << endl;
	}
	outfile.close();

	ifstream infile;
	infile.open(NamaFile + ".txt", ios::in);

	cout << endl << ">= Membuk adan membaca file" << endl;
	if (infile.is_open())
	{
		while (getline(infile, baris))
		{
			cout << baris << \'n';
		}

		infile.close();
	}
	else cout << "Unable to open file";
	return 0;
}


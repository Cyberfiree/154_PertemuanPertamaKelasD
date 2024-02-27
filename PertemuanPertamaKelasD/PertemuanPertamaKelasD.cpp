#include <iostream>
using namespace std;

int main()
{
	//begin
	//numeric nAlas, nTinggi, nLuas
	//display 'Masukkan Alasnya= '
	//accept nAlas
	//display 'Masukkan Tingginya= '
	//accept nTinggi
	//compute nLuas = 1/2 * nAlas * nTinggi
	//display 'Luasnya adalah = ' + nLuas

	int nAlas, nTinggi;
	double nLuas;
	cout << "Masukan Alasnya= ";
	cin >> nAlas;
	cout << "Masukan Tingginya= ";
	cin >> nTinggi;
	nLuas = 1 / 2 * nAlas * nTinggi;
	cout << "Luasnya adalah= " << nLuas << endl;

	system("pause");

}
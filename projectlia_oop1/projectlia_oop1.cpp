

#include <iostream>
using namespace std;

class bangunDatar {

//akses modifier
private:
	float panjang, lebar;
public:
	float luas;

	void input() { //metode input persegi panjang

		cout << "Masukan Panjangnya = ";
		cin >> panjang;
		cout << "Masukan Lebarnya = ";
		cin >> lebar;
	   }

};


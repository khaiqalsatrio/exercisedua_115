#include <iostream>
#include <string>
using namespace std;

class penerbit {
public:
	string judul;
	string pengarang;
};

int main() {
	penerbit buku1;
	buku1.judul = " Daftar pengarang Gama pres";
	buku1.pengarang = "Giga, Lia, dan joko";

	penerbit buku2;
	buku2.judul = "daftar pengarang Intan pariwara";
	buku2.pengarang = "Asroni, dan Giga";
	cout << "DAFTAR PENGARANG DAN PENERBIT BUKU" << endl;
	cout << "==================================" << endl;

	penerbit;
	cout << "penerbit yang di ikuti Giga" << endl;
	cout << ".Gama press" << endl;
	cout << ".Intan pawira" << endl;
	cout << "=================================" << endl;

	penerbit;
	cout << "Daftar buku yang di karang joko" << endl;
	cout << ".Fisika" << endl;
	cout << ".algoritma" << endl;
	cout << "=================================" << endl;

	penerbit;
	cout << "daftar buku yang di karang Lia" << endl;
	cout << ".Basisdata" << endl;
	cout << "=================================" << endl;

	penerbit;
	cout << "Daftar buku yang di karang Asroni" << endl;
	cout << ".Dasar Pemrograman" << endl;
	cout << "================================" << endl;

	cout << "Daftar buku yang dikarang Giga" << endl;
	cout << ".Matematika" << endl;
	cout << ".Multimedia" << endl;
	cout << "========================================" << endl;

	cout << "pengarang buku Gama press : " << buku1.pengarang << endl;
	cout << "pengarang buku Intan pariwara : " << buku2.pengarang << endl;
	cout << "========================================" << endl;

	return 0;
}
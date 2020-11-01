#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class Student {

private:
	string Nama;

public:
	string getNama() {
		return Nama;
	}

	void setNama(string namaParam) {
		this->Nama = namaParam;
	}

	void fungsiKonstan() const {
		cout << "Ini adalah fungsi konstan";
	}
};

int main() {
	Student objStudent;				/* Object Biasa */
	const Student objConstant;		/* Object Constant */

	objStudent.getNama();
	objStudent.fungsiKonstan();

	// objConstant.getNama(); -> Akan Error
	objConstant.fungsiKonstan();


	_getch();
	return 0;
}
#include <iostream>
using namespace std;

class mahasiswa
{
private:
	static long long int nim;
public:
	long long int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }

	mahasiswa(string pnama)
	{
		nama = pnama;
		setID();
	}
};

long long int mahasiswa::nim = 20230140146;

void mahasiswa::setID()
{
	id = ++nim;
}

void mahasiswa::printAll()
{
	cout << "ID =" << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("Aiskha");
	mahasiswa mhs2("Rayya");
	mahasiswa::setNim(20230140146);
	mahasiswa mhs3("Hanun");
	mahasiswa mhs4("Nasywa");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim << endl;
	return 0;
}

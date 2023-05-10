#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim();                          //deklarasi method
};

void mahasiswa::showNim() {                  //implementasi method diluar class
	cout << "No Induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };                     //object mhs
	mhs.showNim();                          //member acces operator

	mahasiswa& ref = mhs;                   //pointer reference refMhs
	ref.nim = 2;                            //Member acces operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs;                 //Pointer deference pMhs
	pMhs->nim = 3;                          //Arrow operator
	mhs.showNim();
	system("pause");
	return 0;
}

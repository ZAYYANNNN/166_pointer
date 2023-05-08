#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void ShowNim();		//deklarasi method

};

void mahasiswa::ShowNim() {		//implementasi method di luar class
	cout << "No Induk = " << nim << endl;

}

int main()
{
	mahasiswa mhs{ 1 };		//object mhs
	mhs.ShowNim();			//Member Acces operator

	mahasiswa& ref = mhs;	//pointer Reference Mhs
}
#include<iostream>
using namespace std;

class Angajat{
	char* nume;
	char CNP[14];
	int salariu;
	
public:
	Angajat();
	Angajat(char*, char [14], int);
	Angajat(const Angajat&);
	~Angajat();
	void afis() const;
	void modif(char*, char [14], int);
	int getsal();
	void copie(const Angajat&);
};

#include "angajat.h"
#include <cstring>
#include <iostream>
using namespace std;
Angajat::Angajat()
{
	
	nume=NULL;
	salariu=0;
	strcpy(CNP, "0000000000000");	
	
}
Angajat::Angajat(char * nume_ang, char CNP1[14], int salariu1)
{
	nume=new char[strlen(nume_ang)+1];
	strcpy(nume, nume_ang);
	strcpy(CNP, CNP1);
	salariu=salariu1;
	
}
Angajat::Angajat(const Angajat &a)
{
nume=new char[strlen(a.nume)+1];
strcpy(nume, a.nume);
strcpy(CNP, a.CNP);
salariu=a.salariu;	
	
}
Angajat::~Angajat()
{
	if(nume!=NULL)
	delete[]nume;
	
}
void  Angajat::afis()const
{
	cout<<"Numele angajatului: "<<nume<<endl;
	cout<<"CNP- ul acestuia: "<<CNP<<endl;
	cout<<"Salariul acestuia: "<<salariu<<endl;
	
}
void Angajat::modif(char *nume_mod, char CNP_mod[14], int salariu_mod)
{
	
	if(nume!=NULL)
	{
		delete [] nume;
		nume=NULL;
	}
	nume=new char [strlen(nume_mod)+1];
	strcpy(nume, nume_mod);
	strcpy(CNP, CNP_mod);
	salariu=salariu_mod;	
}
int Angajat::getsalariu() const
{
	return salariu;	
	
}



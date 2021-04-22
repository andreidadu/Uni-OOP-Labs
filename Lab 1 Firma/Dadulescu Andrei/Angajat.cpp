#include "Angajat.h"
#include<string.h>


Angajat::Angajat(){
	nume=NULL;
	salariu=0;
	strcpy(CNP,"0000000000000");

}

Angajat::Angajat(char *nume_angajat, char CNP_angajat[14], int salariu_angajat){
//	if(nume!=NULL){
//		delete [] nume;
//		nume=NULL;
//	}
	nume=new char[strlen(nume_angajat)+1];
	strcpy(nume, nume_angajat);
	strcpy(CNP,CNP_angajat);
	salariu=salariu_angajat;
}

Angajat::Angajat(const Angajat &s){
	nume=new char[strlen(s.nume)+1];
	strcpy(nume, s.nume);
	strcpy(CNP, s.CNP);
	salariu=s.salariu;
}

Angajat::~Angajat(){
	if(nume!=NULL) 
	delete[] nume;
}
	
void Angajat::afis() const{
	
	cout<<"Nume: "<<nume<<"\n";
	cout<<"CNP: "<<CNP<<"\n";
	cout<<"Salariu: "<<salariu<<"\n";
}
void Angajat::modif(char *nume_angajat, char CNP_angajat[14], int salariu_angajat){
	
	nume=new char[strlen(nume_angajat)+1];
	strcpy(nume, nume_angajat);
	strcpy(CNP,CNP_angajat);
	salariu=salariu_angajat;

}
int Angajat::getsal(){
	
	return salariu;
}


void Angajat::copie(const Angajat &s){
	nume=new char[strlen(s.nume)+1];
	strcpy(nume, s.nume);
	strcpy(CNP, s.CNP);
	salariu=s.salariu;

}



	
	



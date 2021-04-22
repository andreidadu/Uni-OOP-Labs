#include"angajat.h"


angajat::angajat(char*nume, int salariu,int k):persoana(k){
	firma=new char[strlen(nume)+1];
	strcpy(firma,nume);
	salariu_pe_luna=salariu;
}


void angajat::afis(){
	cout<<"Numele firmei este: "<<this->firma<<endl;
	cout<<"Salariul pe luna este: "<<this->salariu_pe_luna<<endl<<endl;
}

int angajat::getVenit(){
	return salariu_pe_luna;
}





#include"angajat_PFA.h"

angajat_PFA::angajat_PFA(char*f, int s, int sa, char* i, int k):angajat(f,s,k), PFA(sa,k){
	info_supl=new char[strlen(i)+1];
	strcpy(info_supl,i);
}

int angajat_PFA::getVenit(){
	return venit_pe_an/12;
	
}

void angajat_PFA::afis(){
	angajat::afis();
	PFA::afis();
	cout<<"Info suplimentare: "<<this->info_supl<<endl;
	
}

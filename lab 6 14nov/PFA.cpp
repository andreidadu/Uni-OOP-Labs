#include"PFA.h"

PFA::PFA(int venit, int k):persoana(k){
	venit_pe_an=venit;
}


void PFA::afis(){
	cout<<"PFA: "<< venit_pe_an<<endl;
	
}

int PFA::getVenit(){
	return venit_pe_an/12;
	
}

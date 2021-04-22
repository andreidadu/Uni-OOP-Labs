#include "firma.h"
#include<map>


int main(int argc, char** argv) {
	
	angajat K1("CNP1", "ANA", 2100);
//	K1.afisare();
	
	angajat K2("CNP2", "ANA2", 2200);
//	K2.afisare();

	angajat K3("CNP3", "ANA3", 2300);
	angajat K4("CNP4", "ANA4", 2400);
	angajat K5("CNP5", "ANA5", 2000);
	angajat K6("CNP6", "ANA6", 2600);
	
	
	multimap<int, angajat> A;
	
	A.insert(pair<int, angajat>(K1.getsalariu(), K1));
	A.insert(pair<int, angajat>(K2.getsalariu(), K2));
	
	sucursala S1("ADRESA4", A);
//	S1.afisare();
	
	
	multimap<int, angajat> B;
	
	B.insert(pair<int, angajat>(K3.getsalariu(), K3));
	B.insert(pair<int, angajat>(K4.getsalariu(), K4));
	B.insert(pair<int, angajat>(K5.getsalariu(), K5));
	B.insert(pair<int, angajat>(K6.getsalariu(), K6));


	sucursala S2("ADRESA2", B);
//	S2.afisare();	
	
	map<string, sucursala>Fir1;
	Fir1.insert(pair<string, sucursala>(S1.getadresa(), S1));
	Fir1.insert(pair<string, sucursala>(S2.getadresa(), S2));
	
	firma F("FIRMA1",Fir1);
//	F.afisare();
	
//	F.stergere(S2);

//	F.adaugare(S2);

	F.afisare()	;



// Cautarea unui angajat dupa CNP
	string X;
	X="CNP4";
	
/*
	for( map<string, sucursala>::iterator it=Fir1.begin(); it!=Fir1.end() ; it++)
		if(it->second.ang.verificarecnp("CNP5"))
			cout<<it->second<<endl;	
		
	
	
	*/
	return 0;
}

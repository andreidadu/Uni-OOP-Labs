#include"angajat.h"

angajat::angajat(string a, string b, int suma){
	firma=a;
	id=b;
	salariu=suma;
}

angajat&::angajat operator=(const angajat& ang){
	firma= ang.firma;
	id= ang.id;
	salariu= ang.salariu;
	
}

void student::afis(){
	cout<<"Firma: "<<firma<<endl;
	cout<<"ID: "<< id<<endl;
	cout<<"Salariu: "<<salariu<<endl;
	
}

voiv student::getv(){
	return salariu;
	
}











#include"angajat.h"

angajat::angajat(string a, string b, int c){
	cnp=a;
	nume=b;
	salariu=c;
}

void angajat::afisare(){
	cout<<"CNP: "<<cnp<<endl;
	cout<<"NUME: "<<nume<<endl;
	cout<<"SALARIU: "<<salariu<<endl<<endl;

}

string angajat::getnume(){
	return nume;
}

string angajat::getcnp(){
	return cnp;
}
int angajat::getsalariu(){
	return salariu;
}

ostream& operator<<(ostream &dev, const angajat& p){
	dev<<"CNP: "<<p.cnp<<endl;
	dev<<"NUME: "<<p.nume<<endl;
	dev<<"SALARIU: "<<p.salariu<<endl<<endl;
	return dev;	
}








#include"sucursala.h"

sucursala::sucursala(string a, multimap<int, angajat>b):adresa(a),ang(b){};

void sucursala::afisare(){
	cout<<"ADRESA SCS: "<<adresa<<endl<<endl;
	cout<<"ANGAJATI: "<<endl;
	for( multimap<int, angajat>::iterator it=ang.begin(); it!=ang.end() ; it++){
		cout<<it->second;
	}
	
}

string sucursala::getadresa(){
	return adresa;
}

ostream& operator<<(ostream &dev,  sucursala& p){
	
	dev<<"ADRESA SCS: "<<p.adresa<<endl<<endl;
	dev<<"ANGAJATI: "<<endl;
	
	multimap<int, angajat>::iterator it;
	
	for( it=p.ang.begin(); it!=p.ang.end() ; it++){
		dev<<it->second;
	}
	
	return dev;
	
	
}

void sucursala::adaugare(angajat&a){
	ang.insert(pair<int, angajat>(a.getsalariu(), a));
}

void sucursala::stergere(angajat&a){
	ang.erase(a.getsalariu());
}

void sucursala::edit(angajat&a, angajat &b){
	ang.erase(a.getsalariu());
	ang.insert(pair<int, angajat>(b.getsalariu(), b));

}

/*void angajat::verificarecnp(string &a){
	if (ang.getnume()==a){
		cout<<"CNP: "<<cnp<<endl;
		cout<<"NUME: "<<nume<<endl;
		cout<<"SALARIU: "<<salariu<<endl<<endl;
	}
		
}*/




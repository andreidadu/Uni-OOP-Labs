#include"produse.h"

istream& operator>>(istream& dev,produs& p){
	dev>>p.cod>>p.marca>>p.pret>>p.nr;
	p.car= new string[p.nr];
	for(int i=0;i<p.nr;i++){
		dev>>p.car[i];
	}
	return dev;
}
ostream& operator<<(ostream &d, const produs&p){
	d<<p.cod<<" "<<p.marca<<" "<<p.pret<<" "<< p.nr;
	
	for(int i=0;i<p.nr;i++)
		d<<p.car[i]<<" ";
	d<<endl<<endl;
	return d;
}

/*void produs::afisare(ostream &dev){
	dev<<setw(20)<<cod<<setw(20)<<marca<<setw(5)<<pret<<setw(3)<<nr;
	for(int i=0;i<nr;i++)
		dev<<car[i];
	
}*/

produs& produs::operator=(const produs& prod){
	cod=prod.cod;
	marca=prod.marca;
	pret=prod.pret;
	nr=prod.nr;
	//realoc
	for(int i=0;i<nr;i++){
		car[i]=prod.car[i];
	}
	
}

int produs::getCar(){
	return nr;
}

string produs::getCod(){
	return cod;
}

int produs::getPret(){
	return pret;
}

int produs::getGarantie(){
	for(int i=0;i<nr;i++)
		if("garantie"==car[i])
			return 1;
	return 0;
}

int produs::find4b(){
	
	if(cod.find("4b")!=string::npos){
		return 1;
	}
	
	return 0;
	
	
}



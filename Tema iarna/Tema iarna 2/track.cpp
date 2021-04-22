#include"track.h"


track::track(int a, int b, string n){
	poz=a;
	durata=b;
	nume=n;
}


void track::afisare(){
	cout<<"pozitia: "<<poz<<"  ";
	cout<<"durata: "<<durata<<" ";
	cout<<"numele: "<<nume<<endl<<endl;
}

int track::getpoz(){
	return poz;
}

int track::getdurata(){
	return durata;
}

ostream& operator<<(ostream &dev, const track& p){
	dev<<"pozitia: "<<p.poz<<"  ";
	dev<<"durata: "<<p.durata<<" ";
	dev<<"numele: "<<p.nume<<endl<<endl;
	return dev;
}






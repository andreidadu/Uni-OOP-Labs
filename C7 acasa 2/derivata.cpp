#include"derivata.h"

derivata::derivata(){}

derivata::derivata(int a1, int a2):baza(a1),atr2(a2){ }

void derivata::set_atr2(int n){
	atr2=n;	
}

void derivata::afisare(){
	baza::afisare();
	cout<<"atr2="<<atr2<<endl;
}




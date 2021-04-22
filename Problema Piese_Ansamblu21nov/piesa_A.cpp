#include"piesa_A.h"

piesa_A::piesa_A(char c[4], int p, int g):piesa(c,p),gauri(g){}

void piesa_A::afisare(){
	piesa::afisare();
	cout<<"Numar gauri: "<<gauri<<endl;
	cout<<"_________"<<endl<<endl;
}
int piesa_A::getGauri(){
	return gauri;
}


#include"piesa.h"

piesa::piesa(char c[4], int p){
	strcpy(cod,c);
	pret=p;
}
void piesa::afisare(){
	cout<<"Cod: "<<cod<<endl;
	cout<<"Pret: "<<pret<<endl<<endl;
}

int piesa::getPret(){
	return pret;
}




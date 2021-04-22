#include"componenta.h"

componenta::componenta(double m, char i[4]){
	masa=m;
	strcpy(id,i);
}
void componenta::afisare(){
	cout<<"Masa: "<<masa<<endl;
	cout<<"ID: "<<id<<endl<<endl;
}

double componenta::getm(){
	return masa;
}


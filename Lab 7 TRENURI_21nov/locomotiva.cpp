#include"locomotiva.h"

locomotiva::locomotiva(double m, char i[4], int numar):componenta(m,i){
	nr=numar;
}

locomotiva::locomotiva(const locomotiva &loco):componenta(loco){
	nr=loco.nr;
}

locomotiva& locomotiva::operator=(const locomotiva &loco){
	componenta::operator=(loco);
	nr=loco.nr;
}
void locomotiva::afisare(){
	componenta::afisare();
	cout<<"Numar locomotiva: "<<nr<<endl;
}
int locomotiva::getNrVag(){
	return nr;
}




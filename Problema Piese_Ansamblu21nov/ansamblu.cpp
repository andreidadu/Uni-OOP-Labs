#include"ansamblu.h"

ansamblu::ansamblu(piesa_A a, piesa_B* v):pa(a){
	vec=new piesa_B[pa.getGauri()];
	for(int i=0;i<pa.getGauri();i++){
		vec[i]=v[i];
	}
	
}

ansamblu& ansamblu::operator=(const ansamblu& an){
	pa=an.pa;
	if(vec!=NULL){
		delete [] vec;
	}
	vec=new piesa_B[pa.getGauri()];
	for(int i=0;i<pa.getGauri();i++){
		vec[i]=an.vec[i];
	}
	return *this;
}

ansamblu::ansamblu(const ansamblu& an):pa(an.pa){
	vec=NULL;
	*this=an;
}
ansamblu::~ansamblu(){
	if(vec!=NULL)
		delete [] vec;
}

void ansamblu::afisare(){
	pa.afisare();
	for(int i=0;i<pa.getGauri();i++)
		vec[i].afisare();
	cout<<"Pret: "<< getPret()<<endl;
	cout<<"________"<<endl;
}

int ansamblu::getPret(){
	int pret=pa.getPret();
	for( int i=0;i<pa.getGauri();i++)
		pret=pret+ vec[i].getPret();
	return pret;
}




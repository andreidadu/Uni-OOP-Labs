#include"Pers.h"
#include<string.h>

Pers::Pers(){
	nume=NULL;
	varsta=0;
}

Pers::Pers(char*n,int k){
	
	nume=new char[strlen(n)+1];
	strcpy(nume,n);
	varsta=k;
	
}
Pers::~Pers(){
	
	delete []nume;
	varsta=0;
	cout<<"\nDestructor\n";
	
}
void Pers::afis()const{
	
	cout<<nume<<" "<<varsta<<" ";
	
}

Pers::Pers(const Pers&p){

	nume=new char[strlen(p.nume)+1];
	strcpy(nume,p.nume);
	varsta=p.varsta;
	
}
Pers& Pers::operator=(const Pers &p){
	
	nume=new char[strlen(p.nume)+1];
	strcpy(nume,p.nume);
	varsta=p.varsta;
	
	return *this;
	
}
/*
void Pers::set_nume(char*n){
	
	if(nume!=NULL)	delete [] nume;
	if(n!=NULL){
		nume=new char[strlen(n)+1];
		strcpy(nume,n);
	}
	else nume=NULL;

}
*/








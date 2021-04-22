#include"Stud_Ang.h"

Stud_Ang::Stud_Ang(){
	fac=NULL;
}
Stud_Ang::Stud_Ang(char*n, int v, float sal1, char*f):Angajat(n,v,sal1){
	
	fac=new char[strlen(f)+1];
	strcpy(fac,f);
	
}



void Stud_Ang::set_fac(char *n){
	if (fac!=NULL)  
		delete [] fac;  
	if (n!=NULL){ 
		fac=new char[strlen(n)+1]; 
		strcpy(fac,n);    
	else 
		fac=NULL; 
}

char* Stud_Ang::get_fac(){
	return fac;
}

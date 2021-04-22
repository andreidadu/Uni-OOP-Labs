#include <iostream>
#include "Angajat.h"
#include<string.h>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	char *nume=new char[10];
	strcpy(nume,"Ana");
	
	Angajat a(nume,"0000000000000",350);
	a.afis();
	a.modif("ANA","1234567891234",500);
	a.afis();
	
	cout<<"\n\n";
	
	cin>>n;
	char name='a';
	int salary=500;
	
	Angajat *v=new Angajat[n];

//	for(int i=0;i<n;i++){
//		v[i].modif("Ana","0000000000000",salary);
//	}
	
	
	for(int i=0;i<n;i++){
		v[i].modif("Ana","0000000000000",salary);
		salary=salary-100;
	}

	Angajat aux;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)	
   		 	if(v[i].getsal() > v[j].getsal() ){
   		 			aux.copie(v[i]);
   		 			v[i].copie(v[j]);
   		 			v[j].copie(aux);
				}
	
		cout<<"___________________DUPA SOD|RTARE________"<<endl;		
	for(int i=0;i<n-1;i++)
    	v[i].afis();
	
	
	
	return 0;
}

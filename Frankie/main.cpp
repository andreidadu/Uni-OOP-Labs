#include <iostream>
#include <cstring>
#include "angajat.h"
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) 
{	

	Angajat a("Ana", "1234567890123", 1500);
	a.afis();
	
	Angajat b;
	b.modif("Edi", "1990924105028", 1200);
	b.afis();
	
	
	
	int n;
	char nume_x[21],CNP_x[14];
	int salariu_x;
 
	
	
	cout<<"Dati numarul de elemente: "<<endl;
	cin>>n;	
	Angajat *v=new Angajat[n];

	for(int i=0; i<n;i++)
	{
		cout<<"Dati numele: "<<endl;
		cin>>nume_x;
		cout<<"Dati cnp-ul : "<<endl;
		cin>>CNP_x;
		cout<<"Dati salariul: "<<endl;
		cin>>salariu_x;
		v[i].modif(nume_x,CNP_x,salariu_x);
	}
	cout<<"______________________________AFSIARE VECTOR_____________________"<<endl;
	for(int i=0;i<n;i++)
	v[i].afis();
	
	
		Angajat aux;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
	if(v[i].getsalariu()>v[j].getsalariu())
	{
		aux=v[i];
		v[i]=v[j];
		v[j]=aux;
	}
	cout<<"_________________________DUPA SORTARE_____________"<<endl;
		for(int i=0;i<n;i++)
	v[i].afis();
	
	
	
	
	
	return 0;
}

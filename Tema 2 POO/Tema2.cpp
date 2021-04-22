#include <cstdlib>
#include <iostream>
#include<cstdio>
#include<string.h>

using namespace std;

struct student{
private: //vreau ca valorile campurilor sa fie accesibile doar prin functii membre
	int id;
	char *nume;
	char grupa_serie[6]; //de ex: ”321AA”
	int note_sem_1[5]; //notele obtinute la MN, POO, SS, TCAI, Electronica
public:
	void init();	
	
	 //functie in care aloc spatiu campurilor(unde e cazul)
	 // si apoi citesc de la tastatura valori pentru ele
	 
	void afisare() const; //functie in care afisez campurile; fara sa le modific (const dupa functie
	 //nu permite modificarea variabilei cu care voi face apelul)
	 
	void modific(const char []); //functie cu care pot modifica grupa_serie
	
	void modific(const int, const int); //functie cu care pot modifica nota la material 0->4, primul
	 //parametru este pozitia notei pe care o modific, al doilea parametru e noua valoare
	 
	void copie(const student&); //copiaza camp cu camp din variabila student data ca parametru
	 //in variabila student cu care e apelata functia
	//adaugati orice functie vi se pare necesara
	
	int medie() const;
	
	int verifGrupa();
	
};

void student::init(){
	cin>>id;
	nume=new char[20];
	getchar();
	gets(nume);
	gets(grupa_serie);
	for(int i=0;i<5;i++)
		cin>>note_sem_1[i];
}

void student::afisare() const{
	cout<<id<<" ";
	puts(nume);
	cout<<" ";
	puts(grupa_serie);
	cout<<" \n";
	for(int i=0;i<5;i++) 
		cout<<note_sem_1[i]<<" ";
	cout<<" \n";
	cout<<" \n";

}

void student::modific(const char nou[6]){
	strcpy(grupa_serie , nou);
}

void student::modific(const int p, const int nota){
	note_sem_1[p]=nota;
}


void student::copie(const student& stud){
	id=stud.id;
	nume=strdup(stud.nume);
	strcpy(grupa_serie , stud.grupa_serie);
	for(int i=0;i<5;i++)
		note_sem_1[i]=stud.note_sem_1[i];
	
}

int student::medie() const{
	
	float medie=0;
	for(int i=0;i<5;i++)
		medie=medie+note_sem_1[i];
	medie=medie/5;
	
	return medie;
}

int student::verifGrupa(){
	if(grupa_serie[3]=='A' && grupa_serie[4]=='A')
		return 1;
	else
		return 0;
	
}




int main(){
	
	student  *v,aux;
	int n;
	cin>>n;
	
	v=new student[n];
	
	for(int i=0;i<n;i++)
		v[i].init();
		
	
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)	
   		 	if(v[i].medie() > v[i+1].medie() ){
   		 			aux.copie(v[i]);
   		 			v[i].copie(v[i+1]);
   		 			v[i+1].copie(aux);
				}
    
    for(int i=0;i<n;i++)
    	v[i].afisare();
    	
    for(int i=0;i<n;i++)
    	if(v[i].verifGrupa()==1)
    		v[i].afisare();
    	
    
	return 0;		
}

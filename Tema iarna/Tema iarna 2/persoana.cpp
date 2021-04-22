#include"persoana.h"
#include<iostream>

using namespace std;

persoana::persoana(string a, int b){
	nume=a;
	varsta=b;
}

void persoana::afisare()const{
	cout<<endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<nume<<" ";
	cout<< varsta<<endl;

	
}

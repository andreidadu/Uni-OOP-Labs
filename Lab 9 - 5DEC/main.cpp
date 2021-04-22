#include<iostream>
#include"produse.h"
using namespace std;

int main(){
	
	produs prod[2];
	
	
	ifstream file("produse.txt");
	ofstream file1("f1.txt");
	ofstream file2("f2.txt");
	ofstream file3("f3.txt");
	
	for(int i=0;i<2;i++){
		file>>prod[i];
	}
	
	for(int i=0;i<2;i++){
		if(prod[i].getGarantie())
			file1<<prod[i];
	}
	

	for(int i=0;i<2;i++){
		if(prod[i].getPret()>10)
			file2<<prod[i];
	}
	
	for(int i=0;i<2;i++){
		if(prod[i].find4b())
			file3<<prod[i];
	}
	
	
}

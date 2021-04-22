#include"piesa_B.h"

piesa_B::piesa_B(char c[4], int p, char *cl):piesa(c,p){
	culoare=new char[strlen(cl)+1];
	strcpy(culoare, cl);
}

piesa_B::piesa_B(const piesa_B& p):piesa(p){
	culoare=new char[strlen(p.culoare)+1];
	strcpy(culoare, p.culoare);
}

piesa_B& piesa_B::operator=(const piesa_B& p){
	piesa::operator=(p);
	if(culoare!=NULL)
		delete [] culoare;
	culoare=new char[strlen(p.culoare)+1];
	strcpy(culoare, p.culoare);
	return *this;
}

piesa_B::~piesa_B(){
	if(culoare==NULL)
		delete [] culoare;
}

void piesa_B::afisare(){
	piesa::afisare();
	cout<<"Culoare: "<<culoare<<endl;
	cout<<"___________"<<endl<<endl;
}




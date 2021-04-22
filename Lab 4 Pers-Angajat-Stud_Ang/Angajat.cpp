#include"Angajat.h"

Angajat::Angajat(){
	sal=0;
}
Angajat::Angajat(char*n, int v, float sal1):Pers(n,v){
	sal=sal1;
}
Angajat::Angajat(const Angajat &a):Pers(a){
	sal=a.sal;	
	
}
Angajat::~Angajat(){
	sal=0;
}
float Angajat::get_sal()const{
	
	return sal;
	
}

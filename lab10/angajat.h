#include"persoana.h"
#pragma once
class angajat: public persoana{
	protected:
		string firma, id;
		int salariu;
	public:
		angajat(string , string , int);
		angajat& operator=(const angajat&);
		~angajat(){}
		
		virtual afis();
		virtual getv();
		
	
};





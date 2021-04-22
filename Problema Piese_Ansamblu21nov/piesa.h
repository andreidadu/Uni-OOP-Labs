#include"Object.h"
#pragma once
class piesa:public Object{
	
	protected:
		char cod[4];
		int pret;
	public:
		piesa(){};
		piesa(char *, int);
		void afisare();
		int getPret();
	
};

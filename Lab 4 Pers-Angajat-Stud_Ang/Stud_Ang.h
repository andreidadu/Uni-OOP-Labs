#include"Angajat.h"

class Stud_Ang:public Angajat{
	protected:
		char *fac;
	public:
		Stud_Ang();
		Stud_Ang(char*, int , float, char* );
		void set_fac(char*);
		char* get_fac;
	
};

#include"persoana.h"

class angajat:virtual public persoana{
	protected:
		char *firma;
		int salariu_pe_luna;
	public:
		angajat(char*,int,int);
		void afis();
		int getVenit();
	
};

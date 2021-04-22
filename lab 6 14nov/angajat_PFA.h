#include"angajat.h"
#include"PFA.h"


class angajat_PFA:public angajat,public PFA
{
	protected:
		char* info_supl;
	public:
		angajat_PFA(char*, int, int, char*,int);
		void afis();
		int getVenit();
		
		
		
	
};

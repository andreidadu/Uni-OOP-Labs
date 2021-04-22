#include"persoana.h"

class PFA:virtual public persoana{
	protected:
		int venit_pe_an;
		
	public:
		PFA(int,int);
		void afis();
		int getVenit();		
		
};
